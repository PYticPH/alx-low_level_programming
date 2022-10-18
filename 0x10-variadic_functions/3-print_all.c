#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * printChar - Print character argument
 *
 * @ap: variadic argument
 *
 * Return: void
 */

void printChar(va_list ap)
{
	char ch;

	ch = va_arg(ap, int);
	printf("%c", ch);
}

/**
 * printStr - Print string argument
 *
 * @ap: variadic argument
 *
 * Return: void
 */

void printStr(va_list ap)
{
	char *str;

	str = va_arg(ap, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * printInt - Print integer argument
 *
 * @ap: variadic argument
 *
 * Return: void
 */

void printInt(va_list ap)
{
	int num;

	num = va_arg(ap, int);
	printf("%d", num);
}

/**
 * printFloat - Print float argumment
 *
 * @ap: variadic argument
 *
 * Return: void
 */

void printFloat(va_list ap)
{
	float fNum;

	fNum = va_arg(ap, double);
	printf("%f", fNum);
}

/**
 * print_all - Print everything
 *
 * @format: Arguments format
 *
 * Return: void
 */

void print_all(const char *const format, ...)
{
	va_list ap;
	char *sep = "";
	int j, i = 0;

	dtype_t  allFunc[] = {
		{"c", printChar},
		{"i", printInt},
		{"f", printFloat},
		{"s", printStr}
	};
	va_start(ap, format);

	while (format && (*(format + i)))
	{
		j = 0;
		while (j < 4 && (*(format + i) != *(allFunc[j].sym)))
			j++;
		if (j < 4)
		{
			printf("%s", sep);
			allFunc[j].getInput(ap);
			sep = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
