#include "lists.h"
#include <stddef.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
/**
 * print_list - prints all elements of a list
 * @h: head of the list/ node
 * Description: prints all elementsof a list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodesTotal = 0;
	const list_t *currentNode = h;

	while (currentNode != NULL)
	{
		if (currentNode->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%ld] %s\n", nodesTotal, currentNode->str);
		}
		nodesTotal++;
		currentNode = currentNode->next;
	}

	return (nodesTotal);
}
