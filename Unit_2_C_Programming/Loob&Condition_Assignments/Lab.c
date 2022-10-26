/*
 ======================================================================================================================
 Name        :Lab_C_Program
 Author      : Isaac Mounir
 Created on	 : oct 26, 2022
 Description : Unit 2 C-Programming >> Lab C-Basic >>Lab C Program using Ansi-style (c99)
 ======================================================================================================================
 */

#include <stdio.h>
int main()
{
int n,j,i=0;
scanf("%d",&n);
for (i=0;i<=n;i++)
{
    for(j=i;j<=n;j++)
    {
        printf("%d",j);
    }
    
          printf("\n");
}

return 0;
}
