#include "lists.h"
#include <stdio.h>
/*
 * sum_listint - the sum of all the data (n) of a linked list
 * @head: Pointer to the head of a list
 * Return: The sum else zero if Null
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
