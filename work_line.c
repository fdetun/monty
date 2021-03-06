#include "monty.h"
int new_n;
/**
 * work_line - executes opcodes
 * Description: executes opcodes
 * @args: working arguments
 * @stack: working stack
 * @line_number: working line number
 * Return: nothing
 */

void work_line(char **args, stack_t **stack, int line_number)
{
	instruction_t instructions[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", add},
		{"nop", _nop},
		{NULL, NULL}
	};
	int i;

	for (i = 0; instructions[i].opcode != NULL; i++)
	{
		if ((strcmp(instructions[i].opcode, args[0])) == 0)
		{
			if (strcmp(args[0], "push") == 0)
				new_n = atoi(args[1]);
			instructions[i].f(stack, line_number);
			break;
		}
	}

}
