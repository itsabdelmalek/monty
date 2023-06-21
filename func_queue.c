#include "monty.h"
/**
 * func_queue - prints the top
 * @head: stack head
 * @cntr: line number
 * Return: void
*/
void func_queue(stack_t **head, unsigned int cntr)
{
	(void)head;
	(void)cntr;
	bus.lifi = 1;
}

/**
 * add_queue - add node to the tail stack
 * @n: new value
 * @head: head of the stack
 * Return: void
 */
void add_queue(stack_t **head, int n)
{
	stack_t *new_node, *ax;

	ax = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (ax)
	{
		while (ax->next)
			ax = ax->next;
	}
	if (!ax)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		ax->next = new_node;
		new_node->prev = ax;
	}
}
