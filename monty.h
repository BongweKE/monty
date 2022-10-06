#ifndef MONTY_H
#define MONTY_H
/* for isdigit */
#include <ctype.h>
/* for strtok */
#include <string.h>
/* for exit */
#include <stdlib.h>

/* for printf */
#include <stdio.h>

/* for read, write, close */
#include <unistd.h>

/* for open */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

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
	int (*f)(stack_t **stack, const int line_number);
} instruction_t;

extern stack_t *head;

void space_sep(char **commands, char *line);

void newline_sep(char **lines, char *buf);

/** remove double pointers **/
int op_pall(stack_t **h, const int n);

int op_push(stack_t **head, const int n);

int op_pint(stack_t **head, const int n); 

int op_pop(stack_t **head, const int index);

int op_swap(stack_t **head, const int n);

int op_add(stack_t **head, const int n);

void *op_add_end(stack_t **head, const int n);

void free_all(stack_t *head);

int (*get_op_func(char *s))(stack_t **, const int);

int _atoi(char *string);
void fillwithNull(char *lines[], int m);
void _write_to_STDOUT(char *_input);
void _iota(int value, char *numberArray);
int lengthcounter(char *str);
char *itoa(int val, int base);

char *_strtok(char *s, char d);
void haserror(stack_t *head, char *commands[], int i);

#endif /*  MONTY_H */
