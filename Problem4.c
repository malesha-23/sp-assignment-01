/*
4.	Problem: Positive, Negative or Zero
a.	Write a C program that takes a number and determines whether it's positive, negative, or zero using if-else statements.
*/
#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if ( n == 0 )
    {
        printf("Zero");
    }
    if ( 0 < n )
    {
        printf("Positive");
    }
    else
    {   
        if( n < 0)
        printf("Negative");
    }
    return 0;
}

/**************************************************************************************************
Sample input:
0
Sample output:
Zero

Sample input:
34
Sample output:
Positive

Sample input:
-34
Sample output:
Negative

***************************************************************************************************/

