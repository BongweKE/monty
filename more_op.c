#include "monty.h"

/**
 * op_nop - does nothing
 * @head: head of linked list
 *
 * @n: number
 *
 * Return: void
 */
void op_nop(stack_t **head, unsigned int n)
{
	if (head == NULL || n == 0)
		return;
}

/**
 * op_add - add first function with next
 * saves result on next node and pops first
 *
 * @head: head of linked list
 *
 * @n: number to be added
 *
 * Return: void
 */
void op_add(stack_t **head, unsigned int n)
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
