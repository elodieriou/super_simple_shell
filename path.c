#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - program that prints each directory contained in the environment
 * variable PATH, one directory per line
 * Return: always 0 success
 */
int main(void)
{
	char *path, *token;

	path = getenv("PATH");
	token = strtok(path, ":");

	while (token)
	{
		printf("%s\n", token);
		token = strtok(NULL, ":");
	}
	return (0);
}
