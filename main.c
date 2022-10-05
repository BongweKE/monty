#include "monty.h"
/**
 *
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
	char *filename, **temp, *buf, *lines[100], *commands[2], *piece;
	ssize_t bytz;
	int (*stack_op)(stack_t **head, const int n), fd, i, n;
	stack_t *head = NULL;

	i = 0;
	fillwithNull(lines, 100);

	if (ac != 2)
	{
		write(STDERR_FILENO, "USAGE: monty file\n",
		      lengthcounter("USAGE: monty file\n"));
		exit(EXIT_FAILURE);
	}

	filename = av[1];

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		fprintf(stderr,
			"Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}

	/* in fututre, first we calculate the length in chars of a file*/
	/* i.e using while */
	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	bytz = read(fd, buf, 1024);
	close(fd);

	newline_sep(lines, buf);
	/* at this point, we have lines as an array of lines */
	i = 0;
	while (lines[i] != NULL)
	{
		/* commands will be a temporary array, always reset */
		space_sep(commands, lines[i]);
		/* now we have commands */
		if (commands[1] == NULL)
			n = 0;
		else
			n = _atoi(commands[1]);
		/* /\* null check for the pointer to func result *\/ */
		if (get_op_func(commands[0]) != NULL)
		{
			stack_op = get_op_func(commands[0]);
			/* everything seems okay, go ahead */
			stack_op(&head, n);
		}
		else
			fprintf(stderr,
				"L%d: unknown instruction %s\n", i, commands[0]);

		/* for the sake of other iterations */
		commands[0] = NULL;
		commands[1] = NULL;
		i++;
	}


	return (0);
}
