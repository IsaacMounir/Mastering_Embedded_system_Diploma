/*
 ======================================================================================================================
 Name        : EX2_C_Program_to_Check_Vowel_or_Consonant_Letter
 Author      : Isaac Mounir
 Created on	 : oct 24, 2022
 Description : Unit 2 C-Programming >> Assignment 2 C-Basic >> EX2 C Program to Check Vowel or Consonant Letter using Ansi-style (c99)
 ======================================================================================================================
 */

#include <stdio.h>
int main()
{
    char x;
    printf("Enter the char to check vowels or consonants   ");
    scanf("%c", &x);
    if (x == 'a' || x == 'e' || x == 'o' || x == 'u' || x == 'i' || x == 'A' || x == 'E' || x == 'O' || x == 'U' || x == 'I')
    {
        printf(" %c is vowels ", x);
    }
    else
        printf(" %c is consonants", x);
    return 0;
}