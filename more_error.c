#include "monty.h"
/**
 * check_add- checks if head or head is NULL
 * and print to STDERR and exit with EXIT_FAILURE
 *
 * @head: head of linked list
 *
 * @commands: command and action
 *
 * @i: for consistency
 *
 * Return: void
 */
void check_add(stack_t *head, char *commands[], int i)
{
	if ((head == NULL || (head)->next == NULL))
	{
		fprintf(stderr,
				"L%d: can't add, stack too short\n", i);
		free_all(head);
		exit(EXIT_FAILURE);
	}

	if (commands == NULL)
		return;
}
/**
 * ac_error - Throws error when argument is not two
 *
 * Return: void
 */
void ac_error(void)
{
	write(STDERR_FILENO, "USAGE: monty file\n",
			lengthcounter("USAGE: monty file\n"));
	exit(EXIT_FAILURE);
}
/**
 * get_fd_error - close fd Throws error and exit failure
 * when fd == (-1)
 *
 * @filename: filename given
 *
 * Return: void
 */
void get_fd_error(char *filename)
{
	fprintf(stderr,
			"Error: Can't open file %s\n", filename);

	exit(EXIT_FAILURE);
}
/**
 * buf_error - checks malloc error
 *
 * @fp: file pointer
 *
 * Return: void
 */
void buf_error(FILE *fp)
{
	fclose(fp);
	fprintf(stderr,
			"Error: malloc failed\n");
	exit(EXIT_FAILURE);
}
/**
 * read_error - check if file can not be read
 *
 * @filename: filename of what is read
 *
 * @fp: file pointer
 *
 * Return: void
 */
void read_error(char *filename, FILE *fp)
{
	fprintf(stderr,
			"Error: Can't open file %s\n", filename);
	fclose(fp);
	exit(EXIT_FAILURE);
}
