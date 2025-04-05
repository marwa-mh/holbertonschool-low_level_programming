#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * append_text_to_file - create a file and write a text to it.
 * @filename: name of the file to create
 * @text_content: text to append to the file.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t w;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (-1);
	}
	while (text_content[len])
		len++;
	w = write(fd, text_content, len);
	if (w == -1 || w != len)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
