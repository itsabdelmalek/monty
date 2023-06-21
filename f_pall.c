#include "monty.h"
/**
 * func_pall - prints the stack
 * @head: stack head
 * @cntr: not used
 * Return: void
*/
void func_pall(stack_t **head, unsigned int cntr)
{
	stack_t *h;
	(void)cntr;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
