#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
void _puts_recursion(char *s);
int _putchar(char c);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
int square_root(int num, int low, int high);
int is_prime(int n, int divisor);
int is_palindrome(char *s);
int palindrome(char *s, int starts, int ends);
#endif
