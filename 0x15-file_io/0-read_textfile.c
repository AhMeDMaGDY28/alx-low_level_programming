#include "main.h"

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
