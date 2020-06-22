#include <stdlib.h>
#include <stdio.h>

/**
 * word_count - counts number of words in a string
 * @str: string to be parsed
 *
 * Return: number of words
 */
int word_count(char *str)
{
	int i, wc = 0;

	for (i = 0; str[i] != '\0'; i++)
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			wc++;
	return (wc);
}

/**
 * strtow - splits a string into words
 * @str: string to be split
 *
 * Return: pointer to new array of null terminated words
 * NULL if failure
 */
char **strtow(char *str)
{
	int i, j, wc, counter, c;
	char **words;

	if (str == NULL)
		return (NULL);

	wc = word_count(str);
	if (wc == 0)
		return (NULL);

	/* allocate array of pointers to strings */
	words = malloc(sizeof(char *) * (wc + 1));
	if (words == NULL)
		return (NULL);

	j = 0;
	for (i = 0; i < wc; i++)
	{
		counter = 0;
		for (; str[j] != '\0'; j++)
		{
			if (str[j] != ' ')
			{
				counter++;
				if (str[j + 1] == ' ' || str[j + 1] == '\0')
					break;
			}
		}
		/* allocate space for each string plus null byte */
		words[i] = malloc(sizeof(char) * (counter + 1));
		if (words[i] == NULL)
			return (NULL);
	}

	j = 0;
	for (i = 0; i < wc; i++)
	{
		c = 0;
		for (; str[j] != '\0'; j++)
		{
			if (str[j] != ' ')
			{
				words[i][c] = str[j];
				c++;
				if (str[j + 1] == ' ' || str[j + 1] == '\0')
				{
					words[i][c] = '\0';
					j++;
					break;
				}
			}
		}
	}
	words[wc] = NULL;
	return (words);
}
