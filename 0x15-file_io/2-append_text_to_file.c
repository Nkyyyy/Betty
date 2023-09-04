#include "main.h"
/**
 * append_text_to_file - appends text at the end
 * @filename: name of file for text append to
 * @text_content: text to append to the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int num;
	int wrr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (num = 0; text_content[num]; num++)
			;
		wrr = write(fd, text_content, num);
		if (wrr == -1)
			return (-1);
	}
	close(fd);

	return (1);
}
