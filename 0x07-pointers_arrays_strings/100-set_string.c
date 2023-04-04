#include "main.h"

/**
 * set_string -The sets the value of a pointer to a char
 * @s:variable source adress.
 * @to: variable target adress.
 * Return: no return.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
