/*
12.	Problem: Sum of N natural numbers
a.	Write a C program to calculate the sum of the first n natural numbers using a loop.

*/

#include<stdio.h>

int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    for ( int i = 1; i <= n; i ++ )
    {
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}



