#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - _whitch program
 * @ac: the number of argument
 * @av: an array of argument
 * Return: 0 if all specified are found and executable,
 * 1 if one or more is nonexistant or not executable,
 */
int main(int ac, char **av)
{
	unsigned int i;
	struct stat st;
	char *buf;


	if (ac < 2)
	{
		printf("Usage : _which filename ...\n");
		return (1);
	}
	for (i = 1; av[i]; i++)
	{
		if (stat(av[i], &st) == 0)
		{
			buf = malloc(sizeof(char) * 100);
			printf("%s: %s\n", av[i], getcwd(buf, 100));
		}
	}
	return (0);
}
