#include "holberton.h"

int _strcmp(char *s1, char *s2)
{
	int operation;

	do {
		operation = (((int) *s1) - ((int) *s2));
		s1++;
		s2++;
	} while (operation == 0 && (*s1 != '\0' && *s2 != '\0'));
	return (operation);
}
