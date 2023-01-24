#include "sort.h"
/**
 * insertion_sort_list - function
 * @list: list of integer
 * Return: nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *temp;

	if (!list || !*list || !(*list)->next)
	{
		return;
	}
    	curr = (*list)->next;
	
	while (curr)
	{
		temp = curr;
		while (temp->prev && temp->n < temp->prev->n)
		{
			temp->prev->next = temp->next;
			if (temp->next)
			{
				temp->next->prev = temp->prev;
			}
			temp->next = temp->prev;
			temp->prev = temp->prev->prev;
			temp->next->prev = temp;
			if (temp->prev)
			{
				temp->prev->next = temp;
			}
			else
			{
				*list = temp;
			}
			print_list(*list);
		}
		curr = curr->next;
	}
}
