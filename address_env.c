#include <stdio.h>
#include <unistd.h>

/**
 * main - program that print the address of environment
 * @ac: the number of arguments
 * @av: an array of argument
 * Return: 0 always success
 */
int main(int ac, char ** av, char ** env)
{
	unsigned  int i;
	extern char **environ;

	for (i = 0; env[i]; i++)
		printf("Address of env: %p | Address of environ: %p\n",
		       env[i], environ[i]);
	return (0);
}
