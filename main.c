#include "monty.h"
/**
 * main - entry point
 *
 * @ac: argument count
 *
 * @av: arguments
 *
 * Return: 0 on sucess
 *
 */
int main(int ac, char **av)
{
	char *filename, line[256], *commands[2];
	int l, n;
	stack_t *head = NULL;
	FILE *fp;

	if (ac != 2)
		ac_error();
	filename = av[1];

	fp  = fopen(filename, "r");
	if (fp == NULL)
		get_fd_error(filename);

	l = 1;
	fillwithNull(commands, 2);

	while (fgets(line, sizeof(line), fp) != NULL)
	{
		commands[0] = NULL;
		commands[1] = NULL;
		space_sep(commands, line);
		line[strcspn(line, "\r\n")] = '\0';
		if (line[0] == '\0')
		{
			l++;
			continue;
		}
		get_checker(commands[0], l)(head, commands, l);
		n = check_commands_1(commands[1]);
		get_op_func(commands[0])(&head, n);
		l++;
	}
	fclose(fp);

	if (head != NULL)
		free_all(head);
	return (0);
}
