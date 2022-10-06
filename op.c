#include "monty.h"

/**
 * op_pall - print all elements
 *
 * @h: head of double linked list
 * @n: n should always be zero
 *
 * Return: Nada
 */
void op_pall(stack_t **h, const int n)
{
	size_t count = n;
	stack_t *copy;
	int value;
	char *numberArray;

	copy = *h;
	while (*h)
	{
		value = h[0]->n;

		numberArray = itoa(value, 10);
		_write_to_STDOUT(numberArray);
		*h = h[0]->next;
		count++;
	}
	*h = copy;
	if (n == 0)
		return;
}


/**
 * op_push - add node at the beginning
 *
 * @head: head of double linked
 *
 * @n: number to be added
 *
 * Return: Nada
 */
void op_push(stack_t **head, const int n)
{
	stack_t *new;

	new = malloc(sizeof(stack_t) * 100);
	if (new == NULL)
	{
		fprintf(stderr,
			"Error: malloc failed\n"); 
		free(new);
		exit(EXIT_FAILURE);
	}
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;

	*head = new;
	return;
}

/**
 * op_pint - print head
 *
 * @head: head of Double linked list
 *
 * @n: returned num
 *
 * Return: void
 */
void op_pint(stack_t **head, const int n)
{
	char *numberArray;
	int value;

	if (*head == NULL)
		return;
	value = (*head)->n;
	numberArray = itoa(value, 10);
	_write_to_STDOUT(numberArray);
	if (n == 0)
		return;
}

/**
 * delete_dnodeint_at_index- delete at node given
 *
 * @head: head of node
 *
 * @index: delete node at this index
 *
 * Return: Void
 */
void op_pop(stack_t **head, const int n)
{
	stack_t /*previous,*/ *copy;

        copy = *head;
	if (*head == NULL)
	{
		return;
	}

	if ((*head)->next != NULL)
	{
		copy = copy->next;
		free(*head);
		*head = copy;
		/*previous = *head;*/
		(*head)->prev = NULL;
		return;
	}
	else
	{
		free(copy);
		*head = NULL;
		return;
	}
	if (n == 0)
		return;
}

/**
 * op_swap - delete at node given
 *
 * @head: head of node
 *
 * @n:No value
 *
 * Return: Void
 */
void op_swap(stack_t **head, const int n)
{
	int x;

	x = (*head)->n;
	(*head)->n = (*head)->next->n;
	(*head)->next->n = x;
	if (n == 0)
		return;
}
