#include "lists.h"
#include <stdio.h>
/*
 * pop_listint - Deletes the head note of a list
 * @head: Points to the address of the pointer head of a list
 * Return: The content  of the head node of the list
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int retn;

	if (*head == NULL)
		return(0);
	temp = *head;
	retn = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return(retn);
}
