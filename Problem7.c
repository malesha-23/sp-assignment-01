/*
7.	Problem: Reverse a Number
a.	Write a C program to reverse a given integer using a while loop.

*/

#include<stdio.h>

int main()
{
    int i;
    scanf("%d", &i);
    //int i = 10;
    while ( i >= 1 )
    {
        printf("%d\n", i);
        i --;
    }
    return 0;
}
