#include "monty.h"
/**
* execute - executes the opcode
* @stack: head linked list - stack
* @cntr: line_counter
* @file: poiner to monty file
* @content: line content
* Return: void
*/
int execute(char *content, stack_t **stack, unsigned int cntr, FILE *file)
{
	instruction_t opst[] = {
				{"push", func_push}, {"pall", func_pall}, {"pint", func_prnt},
				{"pop", func_prntp},
				{"swap", func_swap},
				{"add", func_add},
				{"nop", func_nop},
				{"sub", func_sub},
				{"div", func_div},
				{"mul", func_mul},
				{"mod", func_mod},
				{"pchar", func_pchar},
				{"pstr", func_prntstr},
				{"rotl", func_rot},
				{"rotr", func_rotb},
				{"queue", func_queue},
				{"stack", func_stack},
				{NULL, NULL}
				};
	unsigned int a = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[a].opcode && op)
	{
		if (strcmp(op, opst[a].opcode) == 0)
		{	opst[a].f(stack, cntr);
			return (0);
		}
		a++;
	}
	if (op && opst[a].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", cntr, op);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
