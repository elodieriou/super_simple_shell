#include <stdio.h>
#include <unistd.h>

/**
 * main - get ppid
 * Return: 0 always success
 */
int main(void)
{
	int p_pid;

	p_pid = getppid();
	printf("%d\n", p_pid);

	return (0);
}
