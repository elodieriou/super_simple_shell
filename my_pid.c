#include <stdio.h>
#include <unistd.h>

/**
 * main - get ppid
 * Return: 0 always success
 */
int main(void)
{
	int p_id;

	p_id = getpid();
	printf("%d\n", p_id);

	return (0);
}
