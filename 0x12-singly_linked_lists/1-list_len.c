#include "lists.h"
#include <stddef.h>
/**
 * list_len - returns the number of elements in a linked lis
 * @h: list to be ananlyzed
 * Description: returns number of elems
 * Return: total numbe of elems
 */
size_t list_len(const list_t *h)
{
	size_t nodesTotal = 0;
	const list_t *node = h;

	while (node != NULL)
	{
		nodesTotal++;
		node = node->next;
	}

	return (nodesTotal);
}
