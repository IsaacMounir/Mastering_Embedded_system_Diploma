/*
 ======================================================================================================================
 Name        : EX8_C_Program_to_Make_a_Simple_Calculator_Using_Switch_Case
 Author      : Isaac Mounir
 Created on	 : oct 26, 2022
 Description : Unit 2 C-Programming >> Assignment 2 C-Basic >>EX8 C Program to make a simple calculator using switch case using Ansi-style (c99)
 ======================================================================================================================
 */

#include <stdio.h>
int main()
{
    char operation;
    float x, y;
    printf("\nEnter operation   ");
    scanf("%c", &operation);

    printf("Enter two numbers    \n");
    scanf("%f %f", &x, &y);

    switch (operation)
    {
    case '*':
        printf("the multiply of two numbers  = %f", x * y);
        break;

    case '+':
        printf("the sum of two numbers = %f", x + y);
        break;

    case '-':
        printf("the subtract of two numbers = %f", x - y);
        break;

    case '/':
        printf("the divided of two numbers = %f", x / y);
        break;

    default:
        printf("\n Error !!!! wrong in put ");

        break;
    }
    return 0;
}
