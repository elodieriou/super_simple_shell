#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

/**
 * main - program that execute a super simple shell
 * Return: 0 always success
 */
int main(void)
{
	char *line = NULL;
        size_t buf = 0, n;
	pid_t child_pid;
	char **av, *token;
	int i;

	while(1)
	{
		child_pid = fork();

		if (child_pid == 0)
		{
			printf("#cisfun$ ");

			n = getline(&line, &buf, stdin);
			if (n == -1)
			{
				free(line);
				return (-1);
			}

			for (i = 0; i < strlen(line); i++)
			{
				if (line[i] == '\n')
					line[i] = '\0';
			}

			av[0] = line;
			av = malloc(sizeof(*av) * 2);
			if (av == NULL)
				return (-1);
			token = strtok(line, " ");
			i = 0;
			while(token != NULL)
			{
				av[i] = token;
				token = strtok(NULL, " ");
				i++;
			}
			execve(av[0], av, NULL);
		}
		wait(NULL);
	}
}
