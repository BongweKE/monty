#include "monty.h"

int check_commands_1(char *command_1)
{
	if (command_1 == NULL)
		return (0);
	else
		return (atoi(command_1));
}
