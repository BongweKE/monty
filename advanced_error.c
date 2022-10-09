#include "monty.h"
/**
 * check_sub- checks if head or head is NULL
 * and print to STDERR and exit with EXIT_FAILURE
 *
 * @head: head of linked list
 *
 * @commands: command and action
 *
 * @i: for consistency
 *
 * Return: void
 */
void check_sub(stack_t *head, char *commands[], int i)
{
	if ((head == NULL || (head)->next == NULL))
	{
		fprintf(stderr,
				"L%d: can't sub, stack too short\n", i);
		free_all(head);
		exit(EXIT_FAILURE);
	}

	if (commands == NULL)
		return;
}
/**
 * check_div- checks if head or head is NULL
 * and print to STDERR and exit with EXIT_FAILURE
 * and if head->n is 0
 * @head: head of linked list
 *
 * @commands: command and action
 *
 * @i: for consistency
 *
 * Return: void
 */
void check_div(stack_t *head, char *commands[], int i)
{
	if ((head == NULL || (head)->next == NULL))
	{
		fprintf(stderr,
				"L%d: can't div, stack too short\n", i);
		if (head != NULL)
			free_all(head);
		exit(EXIT_FAILURE);
	}
	if (head->n == 0)
	{
		fprintf(stderr,
				"L%d: division by zero\n", i);
		free_all(head);
		exit(EXIT_FAILURE);
	}

	if (commands == NULL)
		return;
}
/**
 * check_mul- checks if head or head is NULL
 * and print to STDERR and exit with EXIT_FAILURE
 *
 * @head: head of linked list
 *
 * @commands: command and action
 *
 * @i: for consistency
 *
 * Return: void
 */
void check_mul(stack_t *head, char *commands[], int i)
{
	if ((head == NULL || (head)->next == NULL))
	{
		fprintf(stderr,
				"L%d: can't mul, stack too short\n", i);
		free_all(head);
		exit(EXIT_FAILURE);
	}

	if (commands == NULL)
		return;
}
/**
 * check_mod- checks if head or head is NULL
 * and print to STDERR and exit with EXIT_FAILURE
 * and head->n == 0
 * @head: head of linked list
 *
 * @commands: command and action
 *
 * @i: for consistency
 *
 * Return: void
 */
void check_mod(stack_t *head, char *commands[], int i)
{
	if ((head == NULL || (head)->next == NULL))
	{
		fprintf(stderr,
				"L%d: can't mod, stack too short\n", i);
		free_all(head);
		exit(EXIT_FAILURE);
	}
	if (head->n == 0)
	{
		fprintf(stderr,
				"L%d: division by zero\n", i);
		free_all(head);
		exit(EXIT_FAILURE);
	}
	if (commands == NULL)
		return;
}
/**
 * check_pchar- checks if head NULL
 * and print to STDERR and exit with EXIT_FAILURE
 * exits if conversion is not in ascii
 * @head: head of linked list
 *
 * @commands: command and action
 *
 * @i: for consistency
 *
 * Return: void
 */
void check_pchar(stack_t *head, char *commands[], int i)
{
	if (head == NULL)
	{
		fprintf(stderr,
				"L%d: can't pchar, stack empty\n", i);
		free_all(head);
		exit(EXIT_FAILURE);
	}
	if ((head->n > 127)  || (head->n < 0))
	{
		fprintf(stderr,
				"L%d: can't pchar, value out of range\n", i);
		free_all(head);
		exit(EXIT_FAILURE);
	}

	if (commands == NULL)
		return;
}
