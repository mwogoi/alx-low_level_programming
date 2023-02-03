#include "lists.h"
#include <stdio.h>
/*
 * add_nodeint_end - Adds a node at the end of a list
 * @head: address to the pointer having the list beginning 
 * @n: variable holding the new node
 * Return: NULL if failed or the last node if succesfull
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;
	
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
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
	return (*head);
}
