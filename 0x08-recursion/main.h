#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>

/* Function prototypes */

/* 0-puts_recursion.c */
void _puts_recursion(char *s);

/* 1-print_rev_recursion.c */
void _print_rev_recursion(char *s);

/* 2-strlen_recursion.c */
int _strlen_recursion(char *s);

/* 3-factorial.c */
int factorial(int n);

/* 4-pow_recursion.c */
int _pow_recursion(int x, int y);

/* 5-sqrt_recursion.c */
int _sqrt_recursion(int n);

/* 6-is_prime_number.c */
int is_prime_number(int n);

/* 100-is_palindrome.c */
int is_palindrome(char *s);
int check_palindrome(char *s, int length);

/* 101-wildcmp.c */
int wildcmp(char *s1, char *s2);

/* Custom putchar function */
int _putchar(char c);

#endif /* MAIN_H */

