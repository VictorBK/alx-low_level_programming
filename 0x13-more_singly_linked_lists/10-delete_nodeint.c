#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: head of the linked list
 * @index: index to delete
 * Return: 1 if succeeded, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *delNode;
	unsigned int x;

	x = 0;
	temp = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
	}
	else
	{
		while (x < index - 1)
		{
			temp = temp->next;
			if (temp == NULL)
				return (-1);
			x++;
		}
		delNode = temp;
		delNode = delNode->next;
		temp->next = delNode->next;
		free(delNode);
	}
	return (1);
}


