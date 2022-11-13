/*
 ======================================================================================================================
 Name        :Lab_C_Program
 Author      : Isaac Mounir
 Created on	 : Nov 13, 2022
 Description : Unit 2 C-Programming >> Lab Array >> Transpose Matrix using Ansi-style (c99)
 ======================================================================================================================
 */

#include <stdio.h>
int main()
{
    int r, c;
    float a[3][3];
    float t[3][3];
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            printf(" \n enter the valve (%d,%d) :  ", r, c);
            scanf("%f", &a[r][c]);
        }
    }

    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            printf("%f  ", a[r][c]);
            t[c][r] = a[r][c];
        }
        printf("\n");
    }
    
    printf("\n");
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            printf("%f  ", t[r][c]);
        }
        printf("\n");
    }

    return 0;
}
