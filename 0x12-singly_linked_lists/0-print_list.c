#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
*print_list - function that prints elements in a list
*@h: head pointer of the list
*Return: success
*/
size_t print_list(const list_t *h)
{
	int count_node = 0;

	while (h)
	{
		count_node++;
		printf("%s\n", h->str);
		h = h->next;
	}
	return (count_node);
}
