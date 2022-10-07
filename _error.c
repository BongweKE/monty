#include "monty.h"

/**
 * check_push - check if improper argument is given to push
 * if so frees buf and exit with EXIT_FAILURE
 *
 * @head: head of linked list
 *
 * @commands: commands to be executed
 *
 * @i: number to be  added to the new node
 *
 */
void check_push(stack_t *head, char *commands[], int i)
{

	if (commands[1] == NULL)
	{
		fprintf(stderr,
				"L%d: usage: push integer\n", i);
		free_all(head);
		exit(EXIT_FAILURE);
	}
	else if ((atoi(commands[1]) == 0) && (strcmp(commands[1], "0") != 0))
	{
		fprintf(stderr,
				"L%d: usage: push integer\n", i);
		free_all(head);
		exit(EXIT_FAILURE);
	}
	if (head == NULL)
		return;
}
/**
 * check_pall - does noting
 *
 * @head: head of double linked list
 *
 * @commands: command plus action
 *
 * @i: does nothing kept to keep same format
 * for function pointer
 *
 * Return: void
 */
void check_pall(stack_t *head, char *commands[], int i)
{
	if (head == NULL || commands == NULL || i == 0)
		return;
}

/**
 * check_pint - check if head is NUll
 * and prints error message to STDERR
 * exit with EXIT_FAILURE
 * @head: head of linked list
 *
 * @commands: command plus action
 *
 * @i: int will be 0
 *
 * Return: void
 */
void check_pint(stack_t *head, char *commands[], int i)
{
	if (head == NULL)
	{
		fprintf(stderr,
				"L%d: can't pint, stack empty\n", i);
		exit(EXIT_FAILURE);
	}
	if (commands == NULL)
		return;
}

/**
 * check_pop - check if head is NULL
 * and prints to STDERR
 * exits with EXIT_FAILURE
 * @head: head of linked list
 *
 * @commands: command and action
 *
 * @i: included for consistency
 *
 * Return: void
 */
void check_pop(stack_t *head, char *commands[], int i)
{
	if (head == NULL)
	{
		fprintf(stderr,
				"L%d: can't pop an empty stack\n", i);
		exit(EXIT_FAILURE);
	}

	if (commands == NULL)
		return;
}

/**
 * check_swap - check if op_swap gets at least a linked list
 * That has minumun two nodes
 *
 * @head: head of linked list
 *
 * @commands: command name and what to implement
 *
 * @i: used for consistancy
 *
 * Return: void
 */
void check_swap(stack_t *head, char *commands[], int i)
{
	if ((head == NULL) || ((head)->next == NULL))
	{
		fprintf(stderr,
				"L%d: can't swap, stack too short\n", i);
		free_all(head);
		exit(EXIT_FAILURE);
	}
	if (commands == 0)
		return;
}
