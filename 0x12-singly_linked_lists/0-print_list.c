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
		
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n",h->len, h->str);
		}
		h = h->next;
		count_node++;
	}
	
	return (count_node);
}
