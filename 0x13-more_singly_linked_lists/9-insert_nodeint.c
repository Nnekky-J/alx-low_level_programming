#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int m;
	listint_t *num;
	listint_t *temp = *head;

	num = malloc(sizeof(listint_t));
	if (!num || !head)
		return (NULL);

	num->n = n;
	num->next = NULL;

	if (idx == 0)
	{
		num->next = *head;
		*head = num;
		return (num);
	}

	for (m = 0; temp && m < idx; m++)
	{
		if (m == idx - 1)
		{
			num->next = temp->next;
			temp->next = num;
			return (num);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
