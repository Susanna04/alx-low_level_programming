#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - function that adds a new node
 * at the beginning of a list
 * @head: double pointer
 * @str: new string to be added
 * Return: the updated pointer
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}

	newnode = malloc(sizeof(list_t));
	if (!newnode)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = (*head);
	(*head) = newnode;

	return (*head);
}
