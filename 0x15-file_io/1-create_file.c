#include "main.h"

/**
 * create_file - creates file with permissions rw------- and writes content in
 * if file already exists, don't change permissions and just truncate it
 * @filename: name to give to new file
 * @text_content: writes this content into file
 *
 * Return: 1 on success, -1 on error
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i, res;

	if (filename == NULL) /* check if file name is NULL */
		return (-1);

	/* open file with read-write permissions */
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1); /* if file opening fails, return -1 */

	if (text_content == NULL)
		return (1);

	/* write text_content to the file */
	for (i = 0; text_content[i] != 0; i++)
		;

	res = write(fd, text_content, i);
	close(fd);

	return (res == -1 ? -1 : 1);
}
