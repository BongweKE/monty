#include "monty.h"

int op_add(stack_t **head, const int n)
{

	if (*head == NULL || (*head)->next == NULL)
	{
		perror("Error");
		return (n);
	
	}
	(*head)->next->n += (*head)->n;
	op_pop(head, 0);
	return (n);
}
