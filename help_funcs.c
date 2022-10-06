#include "monty.h"
/**
 * _atoi - change string to int
 *
 * @string: string to be changed
 *
 * Return: int change of string
 */
int _atoi(char *string)
{
	int result = 0, sign = 1, i = 0;

	if (string[0] == '-')
	{
		sign = -1;
		i++;
	}
	for (; string[i] != '\0'; i++)
		result = result * 10 + string[i] - '0';
	return (sign * result);
}
/**
 * fillwithNull - fill array of pointers with NULL
 *
 * @lines: array
 *
 * @m: size of array
 *
 * Return: void
 */
void fillwithNull(char *lines[], int m)
{
	int i = 0;

	while (i < m)
	{
		lines[i] = NULL;
		i++;
	}
}

/**
 * _write_to_STDOUT - write to Stdout
 *
 * @_input: takes input to print
 *
 * Return: void
 */
void _write_to_STDOUT(char *_input)
{
	int _check_write_return;
	int std_length = lengthcounter(_input);
	int newlinelength = lengthcounter("\n");

	_check_write_return = write(STDOUT_FILENO, _input, std_length);
	if (_check_write_return == (-1))
	{
		perror("Error: ");
		exit(1);
	}
	write(STDOUT_FILENO, "\n", newlinelength);
}
/**
 * itoa - a function that converts an integer to a string
 * @val: the integer to be converted to a string
 * @base: the base to which the number is converted
 *
 * Return: the converted string
 */
char *itoa(int val, int base)
{
	static char buf[32] = {0};
	int i = 30;

	for (; val && i ; --i, val /= base)
		buf[i] = "0123456789abcdef"[val % base];

	return (&buf[i + 1]);
}
/**
 * lengthcounter - counts the length
 *
 * @str: literal string
 *
 * Return: Length of string
 * without NULL terminator
 */
int lengthcounter(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}








