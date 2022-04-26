#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * @head: double pointer to the head node of linked list
 * Return: head node's data (n)
 */

int pop_listint(listint_t **head)
{
	int x;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	x = temp->n;
	free(temp);
	return (x);
}

