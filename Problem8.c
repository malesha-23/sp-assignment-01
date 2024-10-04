/*
8.	Problem: Area of a Circle
a.	Write a program to calculate the area of a circle given its radius.
*/

#include<stdio.h>

int main()
{
    int r;
    float pi = 3.1416;
    scanf("%d", &r);
    printf("%f\n", (pi*r*r));
    return 0;
}
