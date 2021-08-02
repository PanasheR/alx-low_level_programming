#include "lists.h"
/**
 * listint_len - fun returns number of elements in list
 * @h: Is a first structure of a linked list
 *
 * Return: The number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 1;

	if (h == NULL)
		return (0);

	nodes += listint_len(h->next);
	return (nodes);
}
