#include "monty.h"
/**
  *func_rot- rotates the stack to the top
  *@head: stack head
  *@cntr: line number
  *Return: void
 */
void func_rot(stack_t **head,  __attribute__((unused)) unsigned int cntr)
{
	stack_t *tmp = *head, *ax;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	ax = (*head)->next;
	ax->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = ax;
}
