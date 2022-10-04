#include "monty.h"

/**
 * op_push - add node at the beginning
 *
 * @head: head of double linked
 *
 * @n: number to be added
 *
 * Return: address of new element or
 * Null on failure
 */
int op_push(stack_t **head, const int n)
{
	stack_t *new;

	new = malloc(sizeof(stack_t) * 100);
	if (new == NULL)
	{
		free(new);
		return (1);
	}
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;

	*head = new;
	return (0);
}
