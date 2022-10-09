#include "monty.h"

/**
 * get_checker - a function to find the error check functions
 * for each stack operation
 * @s: the name of the potential stack operation
 *
 * @m: line number in the bytecode file
 * Return: Pointer to an actionable error checker or NULL
 */
void (*get_checker(char *s, int m))(stack_t *, char **, int)
{
	checkers_t checkers[] = {
		{"push", check_push},
		{"pall", check_pall},
		{"pint", check_pint},
		{"pop", check_pop},
		{"swap", check_swap},
		{"add", check_add},
		{"nop", check_pall},
		{"sub", check_sub},
		{"div", check_div},
		{"mul", check_mul},
		{"mod", check_mod},
		{"pchar", check_pchar},
		{"pstr", check_pall},
		{"#", check_pall},
		{NULL, NULL}
	};

	int j;

	j = 0;
	while (checkers[j].opcode != NULL)
	{
		if (strcmp(checkers[j].opcode, s) == 0)
		{
			return (checkers[j].f);
		}
		j++;
	}
	if ((s != NULL) && (s[0] == '#'))
		return (check_pall);
	fprintf(stderr,
		"L%d: unknown instruction %s\n",
		m, s);
	exit(EXIT_FAILURE);
}
