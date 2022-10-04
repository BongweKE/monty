#include "monty.h"

void newline_sep(char **lines, char *buf)
{
	char **temp, *piece;
	temp = lines;
	piece = strtok(buf, "\n");

	while (piece != NULL)
	{
		*temp++ = piece;
		piece = strtok(NULL, "\n");
	}
}

void space_sep(char **commands, char *line)
{
	char **temp, *piece;
	temp = commands;

	piece = strtok(line, " ");

	while (piece != NULL)
	{
		*temp++ = piece;
		piece = strtok(NULL, " ");
	}
}
