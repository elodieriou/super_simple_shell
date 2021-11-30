#include<stdio.h>
#include <string.h>

/**
 * main - program that split up a string and return the first token
 * Return: 0 always success
 */
int main(void)
{
	char string[50] = "Hello world";
	char *token = strtok(string, " "); // Extract the first token

	printf(" %s\n", token); //printing the token
	return 0;
}
