#include "main.h"
#include <stdlib.h>

/**
 * count_words - Count the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
	int words = 0;

	while (*str)
	{
		if (*str == ' ')
			str++;
		else
		{
			words++;
			while (*str != ' ' && *str != '\0')
				str++;
		}
	}

	return words;
}

/**
 * free_words - Free memory allocated for words.
 * @words: The array of words.
 * @count: The number of words.
 */
void free_words(char **words, int count)
{
	int i;
	for (i = 0; i < count; i++)
		free(words[i]);
	free(words);
}

/**
 * strtow - Split a string into words.
 * @str: The input string.
 *
 * Return: An array of words or NULL if the function fails.
 */
char **strtow(char *str)
{
	int total_words = 0, word_index = 0, char_index = 0, word_length = 0;
	char **words, *current_word;

	if (str == NULL || *str == '\0')
		return NULL;

	total_words = count_words(str);
	if (total_words == 0)
		return NULL;

	words = malloc((total_words + 1) * sizeof(char *));
	if (words == NULL)
		return NULL;

	while (*str != '\0' && word_index < total_words)
	{
		if (*str == ' ')
			str++;
		else
		{
			current_word = str;
			while (*str != ' ' && *str != '\0')
			{
				word_length++;
				str++;
			}
			words[word_index] = malloc((word_length + 1) * sizeof(char));
			if (words[word_index] == NULL)
			{
				free_words(words, word_index);
				return NULL;
			}
			while (*current_word != ' ' && *current_word != '\0')
			{
				words[word_index][char_index] = *current_word;
				current_word++;
				char_index++;
			}
			words[word_index][char_index] = '\0';
			word_index++;
			char_index = 0;
			word_length = 0;
			str++;
		}
	}

	words[total_words] = NULL;
	return words;
}
