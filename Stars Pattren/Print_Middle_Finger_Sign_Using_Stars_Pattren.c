#include <stdio.h>
#include <conio.h>

void Print_Middle_Finger();

int main()
{
    Print_Middle_Finger();
    getch();
}

void Print_Middle_Finger()
{
    int i, j, k;
    printf("\n");
    for (i = 1; i <= 16; i++)
    {
        for (j = 1; j <= 16; j++)
        {
            if (i == 1 && (j == 8 || j == 9) || i == 2 && (j == 7 || j == 10) || i == 3 && (j == 7 || j == 10) || i == 4 && (j == 7 || j == 10) || i == 5 && (j == 7 || j == 10) || i == 6 && (j == 7 || j == 10) || i == 4 && (j == 11 || j == 12) || i == 5 && (j == 13) || i == 6 && (j == 13) || i == 7 && (j == 7 || j == 10) || i == 7 && (j == 13) || i == 8 && (j == 7 || j == 10) || i == 8 && (j == 13) || i == 6 && (j == 14) || i == 6 && (j == 15) || i == 7 && (j == 16) || i == 8 && (j == 16) || i == 5 && (j == 5) || i == 5 && (j == 6) || i == 6 && (j == 4) || i == 7 && (j == 4) || i == 8 && (j == 4) || i == 9 && (j == 4 || j == 7 || j == 10 || j == 13 || j == 16) || i == 10 && (j == 4 || j == 7 || j == 10 || j == 13 || j == 16) || i == 8 && (j == 3) || i == 8 && (j == 2) || i == 9 && (j == 1) || i == 10 && (j == 1) || i == 11 && (j == 1 || j == 16) || i == 12 && (j == 1 || j == 16) || i == 13 && (j == 2 || j == 15) || i == 14 && (j == 3 || j == 14) || i == 15 && (j == 4 || j == 13) || i == 16 && (j == 4 || j == 13))
            {
                printf("# ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
}