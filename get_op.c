#include "monty.h"

/**
 * get_op_func - select the correct function to perform the operation
 * once given the char (either pall, push, etc)
 * @s: the type of operation as a string
 *
 * Return: pointer to actionable function
 */
void (*get_op_func(char *s))(stack_t **, unsigned int)
{
	instruction_t ops[] = {
		{"push", op_push},
		{"pall", op_pall},
		{"pint", op_pint},
		{"pop", op_pop},
		{"swap", op_swap},
		{"add", op_add},
		{"sub", op_sub},
		{"div", op_div},
		{"mul", op_mul},
		{"mod", op_mod},
		{"pchar", op_pchar},
		{"pstr", op_pstr},
		{"nop", op_nop},
		{"#", op_nop},
		{NULL, NULL}
	};
	int i;

	/* don't check the null since using it with strcmp is byaad */
	i = 0;
	while (ops[i].opcode != NULL)
	{
		/* check if our strings match then continue */
		if (strcmp(ops[i].opcode, s) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}

	if (s != NULL)
	{
		if (s[0] == '#')
			return (op_nop);
	}
	/**
	 * anything that reaches here has a problem somewhere
	 * it could be NULL of have a wrong operator
	 * check for NULL operator then for the rest,
	 * exit with error code 99 on the function which gets
	 * null result
	 */
	return (NULL);
}
