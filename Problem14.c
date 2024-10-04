/*
14.	Problem: Print Numbers from 1 to N
a.	Write a program that prints numbers from 1 to n using a loop.
*/


#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for ( int i = 1; i <= n; i ++ )
    {
        printf("%d\n", i);
    }
    return 0;
}

