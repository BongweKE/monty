#include "monty.h"

/**
 * get_checker - a function to find the error check functions
 * for each stack operation
 * @s: the name of the potential stack operation
 *
 * Return: Pointer to an actionable error checker or NULL
 */
void (*get_checker(char *s, int m))(stack_t *, char **, int, char *)
{
	checkers_t checkers[] = {
		{"push", check_push},
		{"pall", check_pall},
		{"pint", check_pint},
		{"pop", check_pop},
		{"swap", check_swap},
		{"add", check_add},
		{"nop", check_pall},
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
	fprintf(stderr,
		"L%d: unknown instruction %s\n",
		m, s);
	exit(EXIT_FAILURE);
}
