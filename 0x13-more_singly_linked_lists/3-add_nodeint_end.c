#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end
 * @head: the pointer to the end of the list
 * @n: the data to the be added to the new list
 * Return: address of the element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmp;

	(void)tmp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	tmp = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
	}

	return (*head);
}
