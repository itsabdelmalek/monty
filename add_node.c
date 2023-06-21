#include "monty.h"
/**
 * add_node - add node to the head stack
 * @head: head of the stack
 * @n: the new value
 * Return: void
*/
void add_node(stack_t **head, int n)
{

	stack_t *new_node, *ax;

	ax = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (ax)
		ax->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
