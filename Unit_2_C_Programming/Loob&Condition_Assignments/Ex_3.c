/*
 ======================================================================================================================
 Name        : EX3_C_Program_to_Find_The_Largest_Number.c
 Author      : Isaac Mounir
 Created on	 : oct 24, 2022
 Description : Unit 2 C-Progtamming >> Assignment 2 C-Basic >> EX3 C Program to find the largest number using Ansi-style (c99)
 ======================================================================================================================
 */

#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Enter three numbers=    ");
    scanf("%d %d %d", &x, &y, &z);
    if (x > y && x > z)
        printf(" the largest num is %d ", x);

    if (y > x && y > z)
        printf(" the largest num is %d ", y);

    else
        printf(" the largest num is %d ", z);

    return 0;
}