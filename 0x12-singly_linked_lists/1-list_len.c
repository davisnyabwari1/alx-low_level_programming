#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
*list_len - function that prints elements in a list
*@h: head pointer of the list
*Return: success
*/
size_t list_len(const list_t *h)
{
	size_t count_node = 0;

	while (h)
	{
		count_node++;
		h = h->next;
	}
	return (count_node);
}
