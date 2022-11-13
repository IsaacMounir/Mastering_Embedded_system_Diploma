/*
 ======================================================================================================================
 Name        :Lab_C_Program
 Author      : Isaac Mounir
 Created on	 : Nov 13, 2022
 Description : Unit 2 C-Programming >> Lab Array >> copy string to string using Ansi-style (c99)
 ======================================================================================================================
 */

#include <stdio.h>
#include<string.h>                       // lib of string //
int main()
{
char a[20]="ahmed ezzat";
char b[20];
int i=0;

while (a[i]!=0)
{
    b[i]=a[i];                       
    i++;
}
b[i]=0;                                      // add null to end b //

/*
strcpy(b,a);                     // to use this fun mast define #include<string.h> //
*/
printf("( %s ) ",b);
    return 0;
}
