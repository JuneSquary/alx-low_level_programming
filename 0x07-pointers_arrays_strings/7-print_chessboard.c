#include <stdio.h>
#include "main.h"
/**
 * print_chessboard - Prints the chessboard.
 * @a: The 2D array representing the chessboard.
 *
 * Description: This function prints the chessboard repre
 * Each element of the array is printed, followed by a
 * @a: The chessboard represented as a 2D array.
 */
void print_chessboard(char (*a)[8])
{
int i, j;
int row, col;
for (i = 0; i < 8; i++)
for (row = 0; row < 8; row++)
{
for (j = 0; j < 8; j++)
for (col = 0; col < 8; col++)
{
_putchar(a[i][j]);
_putchar(' ');
_putchar(a[row][col]);
}
_putchar('\n');
_putchar('\n');
}
}
