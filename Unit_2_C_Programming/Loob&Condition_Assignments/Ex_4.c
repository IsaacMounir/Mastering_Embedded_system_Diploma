/*
 ======================================================================================================================
 Name        : EX4_C_Program_to_Check_a_Number_is_Positive_or_Negative_or_Zero.c
 Author      : Isaac Mounir
 Created on	 : oct 24, 2022
 Description : Unit 2 C-Programming >> Assignment 2 C-Basic >> EX4 C Program to check a number is positive or negative or zero using Ansi-style (c99)
 ======================================================================================================================
 */

#include <stdio.h>
int main()
{
    float Num;
    printf("Enter The Number =  ");
    scanf("%f", &Num);
    if (Num > 0)
    {
        printf(" The Number %f is positive ", Num);
    }

    if (Num < 0)
    {
        printf(" The Number %f is nagative  ", Num);
    }

    if (Num == 0)
    {
        printf(" The Number %f is equal zero  ", Num);
    }

    return 0;
}