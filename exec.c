#include <stdio.h>
#include <unistd.h>

/**
 * main - execve example
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	(void)ac;
	int n;

	printf("Before execve\n");
	n = execve(av[1], av, NULL);
	if (n == -1)
	{
		perror("Error:");
	}
	printf("After execve\n");
	return (0);
}
