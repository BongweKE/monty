#include "monty.h"
/**
 * op_pchar- print top node int as char
 *
 * @head: head of linked list
 *
 * @n: number to be added
 *
 * Return: void
 */
void op_pchar(stack_t **head, unsigned int n)
{
	printf("%c\n", (char)(*head)->n);
	if (n == 0)
		n = 0;
}
/**
 * op_pstr - print char of node ints
 * as one string
 *
 * @head: head of linked list
 *
 * @n: number to be added
 *
 * Return: void
 */
void op_pstr(stack_t **head, unsigned int n)
{
	stack_t *temp;

	temp = *head;
	while ((temp != NULL) && (temp->n > 0) && (temp->n <= 255))
	{
		printf("%c", (char)(*head)->n);
	}
	printf("\n");
	if (n == 0)
		n = 0;

}
