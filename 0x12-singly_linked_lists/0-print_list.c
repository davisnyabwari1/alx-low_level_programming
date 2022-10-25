#include "list.h"
#include <stdlib.h>
#include <stdio.h>

/**
*print_list - function that prints elements in a list
*@h: head pointer of the list
*/

size_t print_list(const list_t *h)
{
	if (h == NULL)
		printf("linked list is empty");
	struct list_t *ptr = NULL;
	ptr = h;
	while (ptr != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%lu] %s", ptr->len, ptr->str );
			ptr = ptr->next;
	}

}
