#include <iostream>
#include "Header.h"


int main()
{
    system("Color 0A");
    char arr[r][c];
    int k = 7;
    srand(time(NULL));
    HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
    FillArray(arr);
    while (true)
    {
        for (int t = 0; t <= c - 1; t++)
        {
            for (int p = r - 1; p >= 0; p--)
            {
                if (p != 0)
                {
                    arr[p][t] = arr[p - 1][t];
                }
                else
                {
                    arr[p][t] = (rand() % (126 - 32 + 1)) + 32;
                }
            }
        }
        goToCordinates(0, 0);
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i > 1)
                {
                    if (arr[i - 1][j] != ' ' && arr[i - 2][j] != ' ' && arr[i + 1][j] == ' ')
                    {//the first symbol of the longer columns (more than 3 symbols) will be colored in white
                        SetConsoleTextAttribute(color, 7);
                    }
                    else
                    {
                        if (arr[i + 1][j] != ' ' && arr[i + 2][j] != ' ' && arr[i - 1][j] == ' ')
                        {//the last symbol of the longer columns (more than 3 symbols) will be colored in darker green
                            SetConsoleTextAttribute(color, 2);
                        }
                        else
                        {
                            SetConsoleTextAttribute(color, 10);
                        }
                    }
                }
                /*Since there are many spaces in the matrix and the rand function cannot output them so often,
                we replace some of the characters with spaces.
                The condition in the if is randomly selected.*/
                if ((i * i + k + arr[i][j]) % 2 != 0 || arr[i][j] % 5 == 0) cout << arr[i][j] << "  ";
                else
                {
                    arr[i][j] = ' ';
                    cout << arr[i][j] << "  ";
                }
            }
            cout << endl;

        }
        k = k + 17;
    }
}
