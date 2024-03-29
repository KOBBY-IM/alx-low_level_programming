#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 **/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;

	if (filename == NULL) /* check if file name is NULL*/
		return (-1);

	/* open file with write-only permissions & append to end of file*/
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1); /*if opening fails, return -1*/

	if (text_content == NULL) /* if Tex_content is NULL, return 1*/
		return (1);

	/*write to the end of the file*/
	for (i = 0; text_content[i] != 0; i++)
		;

	i = write(fd, text_content, i);
	close(fd);

	return (i == -1 ? -1 : 1);
}
