#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: char
 */

char *argstostr(int ac, char **av)
{
	char *ar, *str;
	int m, n, cont;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (m = 0; m < ac; m++)
	{
		n = 0;
		while (av[m][n] != '\0')
		{
			n++;
			cont++;
		}
		cont++;
	}
	cont += 1;
	ar = malloc(cont * sizeof(char));
	if (ar == NULL)
		return (NULL);
	str = ar;
	for (m = 0; m < ac; m++)
	{
		n = 0;
		while (av[m][n] != '\0')
		{
			*ar = av[m][n];
			n++;
			ar++;
		}
		*ar = '\n';
		ar++;
	}
	return (str);
}
