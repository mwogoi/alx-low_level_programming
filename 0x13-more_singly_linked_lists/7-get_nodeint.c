#include "lists.h"
#include <stdio.h>
/*
 * get_nodeint_at_index - Returns the Nth node of a list
 * @head: Pointer to the head of a list
 * @index: Variable holding the nth value
 * Return: NULL if node doest exist else the found node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return(NULL);
		head = head->next;
	}
	return (head);
}
