#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - print a string.
 * @s: pointer to char
 * Return: No.
 */

void _puts_recursion(char *s) {
  if (*s == '\0') {
    putchar('\n');
    return;
  }
  putchar(*s);
  _puts_recursion(s + 1);
}
