/*
10.	Problem: Sum of Array Elements
a.	Write a program that takes an array of integers and finds the sum of its elements using a loop.
*/

#include<stdio.h>

int main()
{
    int arr[100];
    int n, sum = 0;
    scanf("%d", &n);
    for( int i = 0; i < n; i ++ )
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("%d", sum);
    return 0;
}