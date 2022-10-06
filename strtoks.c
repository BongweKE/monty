#include "monty.h"
/**
 * newline_sep - separates file using
 * nextline as a delimiter
 *
 * @lines: commands and actions stored together
 *
 * @buf: read file stored in this variable
 *
 * Return: void
 */
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
/**
 * space_sep - separates using space
 * as deleimter
 *
 * @commands: storing here after
 * delimting using space
 *
 * @line: newline_sep function results
 *
 * Return: void
 */
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
