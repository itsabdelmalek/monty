#include "monty.h"
/**
  *func_sub- substration
  *@head: stack head
  *@cntr: line number
  *Return: void
 */
void func_sub(stack_t **head, unsigned int cntr)
{
	stack_t *ax;
	int sus, nodes;

	ax = *head;
	for (nodes = 0; ax != NULL; nodes++)
		ax = ax->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", cntr);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	ax = *head;
	sus = ax->next->n - ax->n;
	ax->next->n = sus;
	*head = ax->next;
	free(ax);
}
