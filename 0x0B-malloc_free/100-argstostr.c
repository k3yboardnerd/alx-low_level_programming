#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * argstostr - This func concatenate all args
 * @ac: number of cmd args passed
 * @av: array of ptr str / values
 * Description: Argumnets to string
 * Return: str/array of char
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, cp = 0, tl = 0;
	char *res;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	while (i < ac)
	{
		tl += strlen(av[i]) + 1;
		i++;
	}

	res = (char *) malloc(tl + 1);

	if (res == NULL)
	{
		return (NULL);
	}

	while (j < ac)
	{
		strcpy(res + cp, av[j]);
		cp += strlen(av[j]);
		res[cp++] = '\n';
		j++;
	}

	res[cp] = '\0';
	return (res);
}
