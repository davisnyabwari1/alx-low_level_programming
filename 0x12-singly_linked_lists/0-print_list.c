#include "list.h"
#include <stdlib.h>
#include <stdio.h>

/**
*print_list - function that prints elements in a list
*@h: head pointer of the list
*Return: success
*/
size_t print_list(const list_t *h)
{
	struct list_t *ptr = NULL;
	int count_node = 0;

	ptr = h;

	while (ptr != NULL)
	{
		count_node++;
		printf("%s", ptr->str);
		ptr = ptr->next;
	}
	return (count_node);
}
