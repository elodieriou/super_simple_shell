#include "main.h"

/**
 * _setenv - function that changes or adds an environment variable
 * @name:
 * @value:
 * @overwrite:
 * Return: 0 on success, or -1 on error
 */
int _setenv(const char *name, const char *value, int overwrite)
{
	int i;
	extern char **environ;
	char *newvar;

	if (overwrite != 0)
	{
		for (i = 0; environ[i]; i++)
		{
			if (strcmp(environ[i], name) == 0)
			{
				token = strtok(NULL, "=");
				
