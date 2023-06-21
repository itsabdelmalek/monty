#include "monty.h"
/**
 * func_prnt - prints the top of the stack
 * @head: stack head
 * @cntr: line number
 * Return: void
*/
void func_prnt(stack_t **head, unsigned int cntr)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", cntr);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
