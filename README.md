![./monty path2/file.m](/Monty.png "Monty Photo")

# Monty 💻Interpreter using Stack and Queue in C


In this project, we 😎😎 implemented a stack and queue operation to build a monty
interpreter in C language

To make it work directly from the shell, the program is called using the
following syntax:


```
./monty bytecodes/00.m
```

Where `monty` is the compiled program's name and `bytescodes/00.m` is the path
to the compiled program

# How it works

After checking to ensure that the arguments supplied to the `monty` program are
as expected, we then the program activates the functionality to interpret the
bytecode files

a typical bytecode file has the following structure
```
push 1
push 2
push 3
pall
add
pall

```

Our program opens the `bytecode` file using `open` and `read` to convert it
into an array of lines.

At this point, we can check for errors using our divers error checking files.

It is also safe to assume that in order to convert each line into an array
of commands, we utilize `strtok()` with a whitespace delimiter.

Once we have the commands, we utilize each one of them to call our stack
operations with the stack having the following structure:

```
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
  * @n: integer
   * @prev: points to the previous element of the stack (or queue)
    * @next: points to the next element of the stack (or queue)
     *
      * Description: doubly linked list node structure
       * for stack, queues, LIFO, FIFO
        */
	typedef struct stack_s
	{
	        int n;
		        struct stack_s *prev;
			        struct stack_s *next;
				} stack_t;
				```

The program chooses structure operations through looping through a preset
set of instructions in `instruction_t` format as follows

```
/**
 * struct instruction_s - opcode and its function
  * @opcode: the opcode
   * @f: function to handle the opcode
    *
     * Description: opcode and its function
      * for stack, queues, LIFO, FIFO
       */
       typedef struct instruction_s
       {
               char *opcode;
	               void (*f)(stack_t **stack, unsigned int line_number);
		       } instruction_t;
		       ```

for example, when we call `push 1` from the bytecode file,
```
opcode = "push";
:.
f = op_push(head, line_number);
```

This simplifies the process and apart from the various error checks, that is
the basic functionality of the program

Quite simple, right?
-Think Again.

# Future Changes

- Correct checker errors from alx
- Find a solution to long line in the header file
- Automate measurment size of file in case we have long bytecode files instead
of using random sizes
- Correct and follow Valgrind errors in `strtok`