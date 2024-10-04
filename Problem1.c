/*
1.	Problem: Even or Odd Sum
a.	Write a C program that takes two numbers and prints if the sum is even or odd
*/
#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);        
    int sum = a + b;
    if(sum % 2 == 0)            
    {
        printf("The sum (%d) is Even", sum);
    }
    else if(sum % 2 == 1) 
    {
        printf("The sum (%d) is Odd\n", sum);
    }
    return 0;
}


/**************************************************************************************************
Sample input:
2 2

Sample output:
Even

Sample input:
10 5

Sample output:
Odd
***************************************************************************************************/