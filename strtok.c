#include <stdio.h>
#include <string.h>
#include <stddef.h>

/**
 * main - program that splits a string and returns an array of each word
 * of a string
 * @ac: is the number of items in av
 * @av: is a NULL terminated array of a strings
 * Return: an array of each word of the string
 */
int main(int ac, char **av)
{
	char *token = strtok(av[1], av[2]);

	if (ac != 3)
	{
		printf("You need two arguments only\n");
		return (-1);
	}
	else
	{
		while(token != NULL)
		{
			printf("%s\n", token);
			token = strtok(NULL, av[2]);
		}
		return (1);
	}
}
