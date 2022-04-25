#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: input header pointer
 * @n: input data int
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *currentNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
		*head = newNode;
	else
	{
		currentNode = *head;
		while (currentNode->next != NULL)
			currentNode = currentNode->next;
		currentNode->next = newNode;
	}
	return (newNode);
}

