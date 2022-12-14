#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * free_list - frees memory of a list
 * @head: pointer to head of singly linked list
 *
 * Return: Nothing to return
 */

void free_list(list_t *head)
{
	if (head == 0)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
