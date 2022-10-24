/*
 ======================================================================================================================
 Name        : EX1_C_Program_to_Check_a_Number_Is_Even
 Author      : Isaac Mounir
 Created on	 : oct 24, 2022
 Description : Unit 2 C-Programming >> Assignment 2 C-Basic >> EX1 C Program to check a number is even using Ansi-style (c99)
 ======================================================================================================================
 */

#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number to check even or odd  = ");
    scanf("%d", &number);
    if ((number % 2) == 0)  // check the remainder is 0 or not //
    {
        printf(" %d is even ", number);
    }
    else
        printf(" %d is odd", number);
    return 0;
}