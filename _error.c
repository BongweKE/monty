#include "monty.h"
void haserror(stack_t *head, char *commands[], int i)
{
	if (commands == NULL)
		return;
	if (strcmp(commands[0], "push") == 0)
	{
		if (commands[1] == NULL)
		{
			fprintf(stderr,
					"L%d: usage: push integer\n", i);
			exit(EXIT_FAILURE);
		}
		else if ((atoi(commands[1])== 0) && (strcmp(commands[1], "0") != 0))
		{
			fprintf(stderr,
					"L%d: usage: push integer\n", i);
			exit(EXIT_FAILURE);
		}
	       return;	
	}
	else if (strcmp(commands[0], "pint") == 0)
	{
		if (head == NULL)
		{
			fprintf(stderr,
					"L%d: can't pint, stack empty\n", i);
			exit(EXIT_FAILURE);
		}
	}
	else if (strcmp(commands[0], "pop") == 0)
	{
		if (head == NULL)
		{
			fprintf(stderr,
					"L%d: : can't pop an empty stack\n", i);
			exit(EXIT_FAILURE);
		}
	}
	else if (strcmp(commands[0], "swap") == 0) 
	{ 
		if((head == NULL) || ((head)->next == NULL))                                                                       
		{
			fprintf(stderr,
					"L%d: can't swap, stack too short\n", i);
			exit(EXIT_FAILURE);
		}
	}
	else if (strcmp(commands[0], "add") == 0) 
	{
		if ((head == NULL || (head)->next == NULL))                                                                        
		{                                                                                                                       
			fprintf(stderr,
					"L%d: can't add, stack too short\n", i);
			exit(EXIT_FAILURE);		
		}

	}
	return;
}
