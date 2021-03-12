#include "variadic_functions.h"
/**
 * _printchar - prints char args
 * @args: args passed to the function
 * Return: void .. by gd
 */
void _printchar(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * _printint - prints int args
 * @args: args passed to the function
 * Return: void
 */
void _printint(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * _printfloat - prints float args
 * @args: args passed to the function
 * Return: void .. by gd
 */
void _printfloat(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * _printstring - prints string args
 * @args: args passed to the function
 * Return: void
 */
void _printstring(va_list args)
{
	char *s;

	s = va_arg(args, char *);
	printf("%s", s == NULL ? "(nil)" : s);
}
/**
 * print_all - prints all the arguments according to format
 * @format: format
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int a, b;
	va_list args;
	char *s = "";

	fun charformat[] = {
		{"c", _printchar},
		{"i", _printint},
		{"f", _printfloat},
		{"s", _printstring},
		{NULL, NULL}
	};
	va_start(args, format);
	a = 0;
	while (format && format[a])
	{
		b = 0;
		while (charformat[b].op != NULL)
		{
			if (format[a] == charformat[b].op[0])
			{
				printf("%s", s);
				charformat[b].f(args);
				s = ", ";
			}
			b++;
		}
		a++;
	}
	printf("\n");
	va_end(args);
}
