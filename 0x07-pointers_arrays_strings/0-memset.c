#include "main.h"
/**
 * _memset - allow fills memory with a constant byte,
 * @s:variable of: memory area.
 * @b: constant byte.
 * @n: bytes filled.
 * Return: the pointer to dest.
 */
char *_memset(char *s, char b, unsigned int n) {
    char *p = s;
    while (n--) {
        *p++ = b;
    }
    return s;
}

