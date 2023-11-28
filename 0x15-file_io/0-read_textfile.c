#include "main.h"
/**
 * read_textfile - Reads and prints the content of a
 * text file to the standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The number of letters read and printed.
 * If an error occurs, returns 0.
 *
 * Description: This function opens a file,
 * reads the specified number of letters,
 * and prints them to the standard output. It then closes the file.
 *
 * Author: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
size_t read_textfile(const char *filename, size_t letters)
{

	int file, nread, nwrite;
	char *chars;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	if (!filename)
		return (0);
	chars = (char *)malloc(sizeof(char) * letters + 1);
	if (!chars)
		return (0);
	nread = read(file, chars, letters);
	if (nread == -1)
		return (0);
	nwrite = write(STDOUT_FILENO, chars, nread);
	if (nwrite != nread)
		return (0);
	close(file);

	return (nwrite);
}
