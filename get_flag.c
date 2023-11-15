#include "main.h"

/**
 * get_flag - Activate flags if __printf encounters a
 * flag modifier in the format string
 * @s: Character representing the flag specifier
 * @f: Pointer to the flags struct where flags are turned on
 *
 * Return: 1 if a flag is activated, 0 otherwise
 */
int get_flag(char s, flags_t *f)
{
	int i = 0;

	switch (s)
	{
		case '+':
			f->plus = 1;
			i = 1;
			break;
		case ' ':
			f->space = 1;
			i = 1;
			break;
		case '#':
			f->hash = 1;
			i = 1;
			break;
	}

	return (i);
}
