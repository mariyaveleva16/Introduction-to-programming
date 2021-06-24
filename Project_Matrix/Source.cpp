#include "Header.h"

void goToCordinates(int x, int y)
{
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD CursorPosition;
	CursorPosition.X = x;
	CursorPosition.Y = y;
	SetConsoleCursorPosition(console, CursorPosition);
}
void FillArray(char array[][c])
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (i == 0)
			{
				array[0][j] = (rand() % (126 - 32 + 1)) + 32;
				cout << array[0][j] << "  ";
			}
			else
			{
				array[i][j] = '  ';
			}
		}
	}
}
