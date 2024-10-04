/*
13.	Problem: Calculate Average
a.	Write a C program that takes five numbers as input and calculates their average.
*/
#include<stdio.h>

int main()
{
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    int sum = a + b + c + d + e;
    float avg = sum / 5;
    printf("AVERAGE = %.3f\n", avg);
    return 0;
}

