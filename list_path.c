#include "main.h"

/**
 * list_path - function that builds a linked list of the PATH directories
 * @head: a pointer of a pointer pointing to the beginning of a linked list
 * Return: Nothing
 */
void list_path(list_t **head)
{
	list_t *new, *last;
	char *path, *token;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return;
	}
	path = getenv("PATH");
	token = strtok(path, ":");

	while (token != NULL)
	{
		new->str = token;
		new->next = NULL;

		if (*head == NULL)
			*head = new;
		else
		{
			last = *head;
			while (last->next != NULL)
				last = last->next;
			last->next = new;
		}
		token = strtok(NULL, ":");
		printf("%s\n", new->str);
	}
	free(new);
}

/**
 * main - print linked list of path
 * Return: 0 always success
 */
int main(void)
{
	list_t *head = NULL;

	list_path(&head);
	return (0);
}
