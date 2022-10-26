/*
 ======================================================================================================================
 Name        : EX6_C_Program_to_calculate_sum_of_natural_numbers
 Author      : Isaac Mounir
 Created on	 : oct 26, 2022
 Description : Unit 2 C-Programming >> Assignment 2 C-Basic >>EX6 C Program to calculate sum of natural numbers using Ansi-style (c99)
 ======================================================================================================================
 */

#include <stdio.h>
int main()
{
    /*
    int i, n, sum;    // solve with for loop//
    sum = 0;
    printf("Enter an integer ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)

    {
        sum =sum + i;
    }
        printf("sum = %d", sum);
        */

    int i = 0, n, sum; // solve by while loop//
    sum = 0;
    printf("Enter an integer ");
    scanf("%d", &n);
    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    printf("sum = %d", sum);

    return 0;
}
