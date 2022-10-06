#include "monty.h"

void newline_sep(char **lines, char *buf)
{
	char **temp, *piece, *sep;

	sep = "\n";
	temp = lines;
	piece = strtok(buf, sep);
	if (piece == NULL)
	        lines[0] = "";
	while (piece != NULL)
	{
		*temp++ = piece;
		piece = strtok(NULL, sep);
	}

}

void space_sep(char **commands, char *line)
{
	char **temp, *piece;
	temp = commands;

	piece = strtok(line, " ");

	if (piece == NULL)
		commands[0] = "";
	while (piece != NULL)
	{
		*temp++ = piece;
		piece = strtok(NULL, " ");
	}
}
