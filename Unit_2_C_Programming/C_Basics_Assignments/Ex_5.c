/*
 ======================================================================================================================
 Name        : EX5_C Program to Find ASCII Value of a Character
 Author      : Isaac Mounir 
 Created on	 : oct 24, 2022
 Description : Unit 2 C-Programming >> Assignment 1 C-Basic >> EX5_ C Program to Find ASCII Value of a Character using Ansi-style (c99)
 ======================================================================================================================
 */

#include <stdio.h>
int main()
{
    char x;
    printf("Enter a character  ");
    scanf("%c",&x);
    printf("ASCII value of %c = %d",x,x);
    return 0;
}