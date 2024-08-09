#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list using insertion sort
 * @list: Double pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *CurrentNode, *Temp;

	/** Check if the list is empty or has only one element */
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	/** Start sorting from the second node */
	CurrentNode = (*list)->next;
	while (CurrentNode != NULL)
	{
		Temp = CurrentNode;

		/** Move Temp backward while it is smaller than its predecessor */
		while (Temp->prev != NULL && Temp->n < Temp->prev->n)
		{
			/** Adjust pointers to swap Temp with Temp->prev */
			Temp->prev->next = Temp->next;
			if (Temp->next != NULL)
				Temp->next->prev = Temp->prev;

			Temp->next = Temp->prev;
			Temp->prev = Temp->next->prev;
			Temp->next->prev = Temp;

			/** Update the head of the list if necessary */
			if (Temp->prev != NULL)
				Temp->prev->next = Temp;
			else
				*list = Temp;

			/** Print the list after each swap */
			print_list(*list);
		}
		/** Move to the next node */
		CurrentNode = CurrentNode->next;
	}
}
