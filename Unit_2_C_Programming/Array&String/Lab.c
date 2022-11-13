/*
 ======================================================================================================================
 Name        :Lab_C_Program
 Author      : Isaac Mounir
 Created on	 : Nov 13, 2022
 Description : Unit 2 C-Programming >> Lab Array >>store and print 10 students degrees using Ansi-style (c99)
 ======================================================================================================================
 */

#include <stdio.h>
int main()
{
    int i;
    float degree[10];
    for (i = 0; i < 10; i++)
    {
        printf("\n enter students %d degrees :   ", i + 1);
        scanf("%f", &degree[i]);
    }
    for (i = 0; i < 10; i++)
        printf("\n enter students %d degrees is %f  ", i + 1, degree[i]);

    return 0;
}
