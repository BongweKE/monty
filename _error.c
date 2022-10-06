#include "monty.h"


void check_push(stack_t *head, char *commands[], int i, char *buf)
{
	if (commands[1] == NULL)
	{
		fprintf(stderr,
			"L%d: usage: push integer\n", i);
		free_all(head);
		free(buf);
		exit(EXIT_FAILURE);
	}
	else if ((atoi(commands[1])== 0) && (strcmp(commands[1], "0") != 0))
	{
		fprintf(stderr,
			"L%d: usage: push integer\n", i);
		free_all(head);
		free(buf);
		exit(EXIT_FAILURE);
	}

	if (head == NULL)
		return;
	return;
}

void check_pall(stack_t *head, char *commands[], int i, char *buf)
{
	if (head == NULL || commands == NULL || i == 0 || buf == NULL)
		return;
	return;
}

void check_pint(stack_t *head, char *commands[], int i, char *buf)
{
	if (head == NULL)
	{
		fprintf(stderr,
			"L%d: can't pint, stack empty\n", i);
		free_all(head);
		free(buf);
		exit(EXIT_FAILURE);
	}
	if (commands == NULL)
		return;
	return;
}

void check_pop(stack_t *head, char *commands[], int i, char *buf)
{
	if (head == NULL)
	{
		fprintf(stderr,
			"L%d: can't pop an empty stack\n", i);
		free_all(head);
		free(buf);
		exit(EXIT_FAILURE);
	}

	if (commands == NULL)
		return;
}

void check_swap(stack_t *head, char *commands[], int i, char *buf)
{
	if((head == NULL) || ((head)->next == NULL))
	{
		fprintf(stderr,
			"L%d: can't swap, stack too short\n", i);
		free_all(head);
		free(buf);
		exit(EXIT_FAILURE);
	}
	if (commands == 0)
		return;
}

void check_add(stack_t *head, char *commands[], int i, char *buf)
{
	if ((head == NULL || (head)->next == NULL))
	{
		fprintf(stderr,
			"L%d: can't add, stack too short\n", i);
		free_all(head);
		free(buf);
		exit(EXIT_FAILURE);
	}

	if (commands == NULL)
		return;
}
