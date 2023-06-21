#include "monty.h"
/**
 * func_prntstr - prints the string starting at the top of the stack
 * @head: stack head
 * @cntr: line number
 * Return: void
*/
void func_prntstr(stack_t **head, unsigned int cntr)
{
	stack_t *h;
	(void)cntr;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
