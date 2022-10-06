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
 * @buf: storage from read
 *
 * Return: void
 */
void check_add(stack_t *head, char *commands[], int i, char *buf)
{
	if ((head == NULL || (head)->next == NULL))
	{
		fprintf(stderr,
				"L%d: can't add, stack too short\n", i);
		free_all(head);
		free(buf);
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
 * @fd: return value of open() system call
 *
 * Return: void
 */
void get_fd_error(char *filename, int fd)
{
	fprintf(stderr,
			"Error: Can't open file %s\n", filename);
	close(fd);
	exit(EXIT_FAILURE);
}
/**
 * buf_error - checks malloc error
 *
 * @fd: return value of fd
 *
 * @buf: read() system call stores
 * read to this variable
 *
 * Return: void
 */
void buf_error(int fd, char *buf)
{
	close(fd);
	free(buf);
	fprintf(stderr,
			"Error: malloc failed\n");
	exit(EXIT_FAILURE);
}
/**
 * read_error - check if file can not be read
 *
 * @buf: read() system call stores
 * what is read to this variable
 *
 * @filename: filename of what is read
 *
 * @fd: return of open
 *
 * Return: void
 */
void read_error(char *buf, char *filename, int fd)
{
	fprintf(stderr,
			"Error: Can't open file %s\n", filename);
	close(fd);
	free(buf);
	exit(EXIT_FAILURE);
}
