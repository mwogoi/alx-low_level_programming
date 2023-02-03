#include "lists.h"
#include <stdio.h>
/*
 * free_listint2 - Frees a list 
 * @head : point to the address of the pointer to the head of a list
 * Return : void
 */
void free_listint2(listint_t **head);
{
	listint_t *temp;

	if (*head == NULL)
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head == NULL;
}
