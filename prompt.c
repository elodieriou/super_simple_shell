#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that read an entire line
 * Return: 0 always success
 */
int main(void)
{
	char *line = NULL;
	size_t buf = 0;
	int n;

	printf("$ ");
	n = getline(&line, &buf, stdin);
	if(n == -1)
	{
		free(line);
		return(-1);
	}
	printf("%s", line);
	free(line);
	return (n);
}
