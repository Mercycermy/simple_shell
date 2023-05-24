#include "shell.h"
/**
 * _free - Free the memory for the last execution
 * @entry: Input typed by the user
 */
void _free(char *entry)
{
	if (isatty(STDIN_FILENO))
	{
		_putchar('\n');
		free(entry);
	}
	if (!isatty(STDIN_FILENO))
		free(entry);
}
