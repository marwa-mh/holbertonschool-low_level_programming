#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * read_textfile - read a file
 * @filename: name of file
 * @letters: the number of characters we want to read
 * Return: number
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t r;
	ssize_t w;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	r = read(fd, buffer, letters);
	if (r == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1 || w != r)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (w);
}

