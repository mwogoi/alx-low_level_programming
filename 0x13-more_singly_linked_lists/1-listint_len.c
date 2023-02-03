#include "lists.h"
#include <stdio.h>
/*
 * listint_len - lists the elements in a list
 * @h: pointer to the head of the list
 * Return: The number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
