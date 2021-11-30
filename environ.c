#include <stdio.h>
#include <unistd.h>

/**
 * main - program that prints the environnement with environ
 * Return: 0 always success
 */
int main(void)
{
	extern char **environ;
	int i;

	for (i = 0; environ[i]; i++)
		printf("%s\n", environ[i]);
	return (0);
}
