/*
 ======================================================================================================================
 Name        : EX4_ C Program to Multiply two Floating Point Numbers
 Author      : Isaac Mounir 
 Created on	 : oct 24, 2022
 Description : Unit 2 C-Programming >> Assignment 1 C-Basic >> EX4_ C Program to Multiply two Floating Point Numbers using Ansi-style (c99)
 ======================================================================================================================
 */

#include <stdio.h>
int main()
{
    float x;
    float y;
    float product;
    printf("Enter two num=   -  ");
    scanf("%f %f",&x , &y);
    product = x*y;
    printf("product =  %f",product);
    return 0;
}