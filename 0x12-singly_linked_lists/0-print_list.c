#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: a pointer to a singly linked list
 *
 * Return: number of nodes/elements in the list
 */
size_t print_list(const list_t *h)
{
	size_t n_elem;

	n_elem = 0;
	while(h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n_elem++;
	}
	return (n_elem);
}