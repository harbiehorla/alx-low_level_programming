/*
 * File: 0-print_listint.c
 */

#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the listint_t list.
 */
size_t print_listint(const listint_t *head)
{
	size_t nodes = 0;

	while (head)
	{
		nodes++;
		printf("%d\n", head->n);
		head = head->next;
	}

	return (nodes);
}
