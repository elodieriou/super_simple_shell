#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - program that executes the command ls -l /tmp in 5 different
 * child process
 * Return: 0 always success
 */
int main(void)
{
	char *av[] = {"/bin/ls", "-l", "/tmp", NULL};
	pid_t child_pid;
	int i, status, exe;

	for (i = 0; i < 5; i++)
	{
		child_pid = fork();
		if (child_pid == -1)
		{
			printf("Error");
			return (-1);
		}
		if (child_pid == 0)
		{
			exe = execve(av[0], av, NULL);
			if (exe == -1)
			{
				printf("Error");
				return (-1);
			}
		}
		wait(&status);
	}
	return (0);
}
