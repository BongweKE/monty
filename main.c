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
	char *filename, *buf, *lines[100], *commands[2];
	int fd, i, l, n, bytz;
	stack_t *head = NULL;

	fillwithNull(lines, 100);
	if (ac != 2)
		ac_error();
	filename = av[1];
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		get_fd_error(filename, fd);
	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
		buf_error(fd, buf);
	bytz = read(fd, buf, 1024);
	if (bytz == (-1))
		read_error(buf, filename, fd);
	else
		close(fd);
	newline_sep(lines, buf);
	i = 0;
	fillwithNull(commands, 2);
	while (lines[i] != NULL)
	{
		l = i + 1;
		space_sep(commands, lines[i]);
		get_checker(commands[0], l)(head, commands, l, buf);
		n = check_commands_1(commands[1]);
		printf("%s\n", commands[0]);
		get_op_func(commands[0])(&head, n);
		commands[0] = NULL;
		commands[1] = NULL;
		i++;
	}
	free(buf);
	free_all(head);
	return (0);
}
