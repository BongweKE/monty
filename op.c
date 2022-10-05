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
	stack_t *copy;

	copy = *h;
	while (*h)
	{
		printf("%d\n", h[0]->n);
		*h = h[0]->next;
		count++;
	}
	*h = copy;
	return (0);
}
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
/**
 * op_pint - print head
 *
 * @head: head of Double linked list
 *
 * @n: returned num
 *
 * Return: n
 */
int op_pint(stack_t **head, const int n)
{
	if (*head == NULL)
		return (0);
	printf("%d\n", (*head)->n);
	return (n);
}
/**
 * delete_dnodeint_at_index- delete at node given
 *
 * @head: head of node
 *
 * @index: delete node at this index
 *
 * Return: 1 on sucess and -1 on failure
 */
int op_pop(stack_t **head, const int n)
{
	stack_t /*previous,*/ *copy;

	/*previous = *head,*/ copy = *head;
	if (*head == NULL)
	{
		return (-1);
	}
	if ((*head)->next != NULL)
	{
		copy = copy->next;
		free(*head);
		*head = copy;
		/*previous = *head;*/
		(*head)->prev = NULL;
		return (1);
	}
	else
	{
		free(copy);
		*head = NULL;
		return (1);
	}
	return (n);
}
int op_swap(stack_t **head, const int n)
{
	int x;

	if (*head == NULL || (*head)->next == NULL)
	{
		perror("Error");
		return (n);
	}
	x = (*head)->n;
	(*head)->n = (*head)->next->n;
	(*head)->next->n = x;
	return (n);
}
