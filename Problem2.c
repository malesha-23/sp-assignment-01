/*
2.	Problem: Odd or Even
a.	Write a C program to check whether a given number is odd or even using an if-else statement.
*/
#include<stdio.h>

int main()
{
    int x;
    scanf("%d",&x);
    if ( x % 2 == 0 )
    {
        printf("even");
    }
    else
    {
        if ( x % 2 == 1 )
        {
            printf("odd");
        }
    }
    return 0;
}



/**************************************************************************************************
Sample input:
2 

Sample output:
Even

Sample input:
5

Sample output:
Odd

***************************************************************************************************/






