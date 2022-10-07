#include "monty.h"
/**
 * op_sub- substracts first function from the next
 * node and saves in the next node
 * saves result on next node and pops first node
 *
 * @head: head of linked list
 *
 * @n: number to be added
 *
 * Return: void
 */
void op_sub(stack_t **head, unsigned int n)
{
	(*head)->next->n -= (*head)->n;
	op_pop(head, 0);
	if (n == 0)
		return;
}
/**
 * op_div - divides second node int by the first
 * then saves result on next node and pops first
 *
 * @head: head of linked list
 *
 * @n: number to be added
 *
 * Return: void
 */
void op_div(stack_t **head, unsigned int n)
{
	(*head)->next->n /= (*head)->n;
	op_pop(head, 0);
	if (n == 0)
		return;
}
/**
 * op_mul - multiply first node integer by next
 * then saves result on next node and pops first
 *
 * @head: head of linked list
 *
 * @n: number to be added
 *
 * Return: void
 */
void op_mul(stack_t **head, unsigned int n)
{
	(*head)->next->n *= (*head)->n;
	op_pop(head, 0);
	if (n == 0)
		return;
}
/**
 * op_mod - returns modules of second node
 * by first node int first
 * saves result on next node and pops first
 *
 * @head: head of linked list
 *
 * @n: number to be added
 *
 * Return: void
 */
void op_mod(stack_t **head, unsigned int n)
{
	(*head)->next->n %= (*head)->n;
	op_pop(head, 0);
	if (n == 0)
		return;
}

