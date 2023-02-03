#include "lists.h"
#include <stdio.h>
/*
 * add_nodeint - Adds a new node at the start of a list
 * @head: pointer to the addres of the first element in the list
 * @n: variable containing the new node value
 * Return: Null if it fails and new node of succesfull
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
