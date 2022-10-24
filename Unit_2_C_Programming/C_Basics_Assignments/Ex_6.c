/*
 ======================================================================================================================
 Name        : EX6_C Program to Source Code to Swap Two Numbers
 Author      : Isaac Mounir
 Created on	 : oct 24, 2022
 Description : Unit 2 C-Programming >> Assignment 1 C-Basic >> EX6_ C Program to Source Code to Swap Two Numbers using Ansi-style (c99)
 ======================================================================================================================
 */

#include <stdio.h>
int main()
{
    int a;
    int b;
    int temp;
    printf("Enter the value of a = ");
    scanf("%d", &a);
    printf("Enter the value of b = ");
    scanf("%d", &b);
    // swap numbers with temp variable  //
    temp = a;
    a = b;
    b = temp;
    printf("after of swap ,the value of a = %d\n", a);
    printf("after of swap ,the value of b = %d", b);

    return 0;
}