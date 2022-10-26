/*
 ======================================================================================================================
 Name        : EX7_C_Program_to_find_factorial_of_numbers
 Author      : Isaac Mounir
 Created on	 : oct 26, 2022
 Description : Unit 2 C-Programming >> Assignment 2 C-Basic >>EX7 C Program to find factorial of numbers using Ansi-style (c99)
 ======================================================================================================================
 */

#include <stdio.h>
int main()
{
     int i, n;
     int factorial=1;
    printf("Enter an integer = ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Error !!! factorial of negative num does not exist ");
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            factorial = factorial * i;
        }
        printf("factorial = %d", factorial);
    }
    return 0;
}
