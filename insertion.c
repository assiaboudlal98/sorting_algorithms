#include "sort.h"
void insertion_sort_list(listint_t **list)
{
	listint_t *crn_t;
	listint_t *tm_p;
	listint_t *tm_ppr;
	listint_t *tm_pnx;
	listint_t *tm_ppr_pr;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	crn_t = (*list)->next;
	while (crn_t != NULL)
	{
		tm_p = crn_t;
		while (tm_p->prev != NULL && tm_p->n < tm_p->prev->n)
		{
			tm_ppr = tm_p->prev;
			tm_pnx = tm_p->next;
			tm_ppr_pr = tm_p->prev->prev;

			tm_ppr->next = tm_pnx;
			if (tm_pnx != NULL)
				tm_pnx->prev = tm_ppr;

			tm_p->next = tm_ppr;
			tm_p->prev = tm_ppr_pr;
			if (tm_ppr_pr != NULL)
				tm_ppr_pr->next = tm_p;
			tm_ppr->prev = tm_p;
			if (tm_ppr == *list)
				*list = tm_p;
			print_list(*list);
		}
		crn_t = crn_t->next;
	}
}
