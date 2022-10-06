#include "monty.h"
/**
 * check_commands_1 - check if commands_1 == NULL
 *
 * @command_1: check to change
 *
 * Return: int atoied command_1,
 * otherwise 0 on faiure
 */
int check_commands_1(char *command_1)
{
	if (command_1 == NULL)
		return (0);
	else
		return (atoi(command_1));
}
