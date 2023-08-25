#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node -  adds a new node at the beginning of a list_t list.
 * @head: first node of linked list
 * @str: string to be added as new node
 * Description:  adds a new node at the beginning of a list_t list.
 * Return: address of new node or NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int str_len;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	str_len = strlen(str);
	newNode->str = strdup(str);
	newNode->len = str_len;
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
