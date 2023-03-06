#include "main.h"
/**
 * print_chessboard - Entry function that prints the checkboard
 * @a: Parameter storing array
 * Return: ...
 */
void print_chessboard(char (*a)[8])
{
	int chess1, chess2;

	for (chess1 = 0; a[chess1][7]; chess1++)
	{
		for (chess2 = 0; chess2 < 8; chess2++)
			_putchar(a[chess1][chess2]);
		_putchar('\n');
	}
}
