#include "monty.h"
/**
 * func_div - divides the top two elements of the stack
 * @head: stack head
 * @cntr: line number
 * Return: no return
*/
void func_div(stack_t **head, unsigned int cntr)
{
	stack_t *h;
	int len = 0, ax;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", cntr);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", cntr);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	ax = h->next->n / h->n;
	h->next->n = ax;
	*head = h->next;
	free(h);
}
