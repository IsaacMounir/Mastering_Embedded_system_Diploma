/*
 ======================================================================================================================
 Name        : EX6_C Program to Source Code to Swap Two Numbers without temp variable
 Author      : Isaac Mounir
 Created on	 : oct 24, 2022
 Description : Unit 2 C-Programming >> Assignment 1 C-Basic >> EX7_ C Program Source Code to Swap Two Numbers without temp variable using Ansi-style (c99)
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
    // assum a = 30  and b = 70 // this code without temp variable //
    a = a + b; // now a = 30+70=100
    b = a - b; // now b = 100-70=30
    a = a - b; // now a=100-30=70
               // swap is done
    printf("after of swap ,the value of a = %d\n", a);
    printf("after of swap ,the value of b = %d", b);

    return 0;
}