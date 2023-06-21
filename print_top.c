#include "monty.h"
/**
 * func_prntp - prints the top of the stack
 * @head: stack head
 * @cntr: line number
 * Return: void
*/
void func_prntp(stack_t **head, unsigned int cntr)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", cntr);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
