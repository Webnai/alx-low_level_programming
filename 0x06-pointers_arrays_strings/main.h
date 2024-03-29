#ifndef _MAIN_H_
#define _MAIN_H_

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _putchar(char);
int _strcmp(char *s1, char *s2);
/**
 * reverse_array - reverses an array
 * @a: array to reverse
 * @n: how many elements
 */
void reverse_array(int *a, int n);
/**
 * cap_string - capitalizes the string;
 * @s: string to capitalize
 * Return: return the string
 */
char *string_toupper(char *);
char *cap_string(char *);
/**
 * leet - switches characters to 1337
 * @s: string to switch
 *
 * Return: returns character
 */
char *leet(char *);
char *rot13(char *);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_beffer(char *b, int size);

#endif
