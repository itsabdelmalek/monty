#include "monty.h"
/**
  *func_rotb- rotates the stack to the bottom
  *@head: stack head
  *@cntr: line number
  *Return: void
 */
void func_rotb(stack_t **head, __attribute__((unused)) unsigned int cntr)
{
	stack_t *copy;

	copy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
}
