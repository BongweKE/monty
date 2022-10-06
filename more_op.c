#include "monty.h"

void op_add(stack_t **head, const int n)
{
	(*head)->next->n += (*head)->n;
	op_pop(head, 0);
	if (n == 0)
		return;
}


/**
 * free_all - free doubly linked list
 *
 * @head: head of double linked list
 *
 * Return: void
 */
void free_all(stack_t *head)
{
	stack_t *temp;

	if (head == NULL)
		return;
	while (head->next)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
