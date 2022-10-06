#include "monty.h"

/**
 *
 */
void ac_error(void)
{
	write(STDERR_FILENO, "USAGE: monty file\n",
	      lengthcounter("USAGE: monty file\n"));
	exit(EXIT_FAILURE);
}

void get_fd_error(char *filename, int fd)
{
		fprintf(stderr,
			"Error: Can't open file %s\n", filename);
		close(fd);
		exit(EXIT_FAILURE);
}

void buf_error(int fd, char *buf)
{
	close(fd);
	free(buf);
	fprintf(stderr,
		"Error: malloc failed\n");
	exit(EXIT_FAILURE);
}

void read_error(char* buf, char *filename, int fd)
{
	fprintf(stderr,
		"Error: Can't open file %s\n", filename);
	close(fd);
	free(buf);
	exit(EXIT_FAILURE);
}
