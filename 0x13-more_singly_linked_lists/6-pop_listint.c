#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the pointer of the head of the list
 *
 * Return: the data (n) of the deleted head node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	if (head != NULL && *head != NULL)
	{
		data = (*head)->n;   /* Store the data of the head node */
		temp = (*head)->next; /* Store the next node in a temporary pointer */
		free(*head);         /* Free the head node */
		*head = temp;        /* Move the head to the next node */
	}

	return (data);
}
