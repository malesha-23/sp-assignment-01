/*
3.	Problem: Largest of Three Numbers
a.	Write a C program to find the largest of three numbers using nested if-else conditions.
*/
#include<stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d",&a,&b,&c);
    if( a > b )
    {
        if( a > b && a > c )
        {
            printf("%d\n", a);
        }
        else
        {
            printf("%d\n", c);
        }
    }
    else
    {
        if( a < b && c < b)
        {
            printf("%d", b);
        }
        else
        {
            printf("%d", c);
        }
    }
    return 0;
}


/**************************************************************************************************
Sample input:
3 5 97

Sample output:
97

***************************************************************************************************/