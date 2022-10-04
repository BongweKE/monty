#include "monty.h"

/**
 * op_pall - print all elements
 *
 * @h: head of double linked list
 * @n: n should always be zero
 *
 * Return: int
 */
int op_pall(stack_t **h, const int n)
{
	size_t count = n;

	while (*h)
	{
		printf("%d\n", h[0]->n);
		*h = h[0]->next;
		count++;
	}
	return (0);
}
