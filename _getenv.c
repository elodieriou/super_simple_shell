#include <stdio.h>
#include <string.h>

/**
 * _getenv - function that gets an environment variable
 * @name: a pointer to the name of environment
 * Return: a pointer to the value in the environment, or
 * NULL if there is no match
 */
char *_getenv(const char *name)
{
	unsigned int i;
	extern char **environ;
	char *token;

	for (i = 0; environ[i]; i++)
	{
		token = strtok(environ[i], "=");
		if (strcmp(token, name) == 0)
		{
			token = strtok(NULL, "=");
			return (token);
		}
	}
	return (0);
}

/**
 * main - prints the environment
 * Return: Always 0
 */
int main(void)
{
        char *str = _getenv("HOME");

        if (str == 0)
                printf("This environment doesn't exist\n");
        else
                printf("%s\n", str);
        return (0);
}
