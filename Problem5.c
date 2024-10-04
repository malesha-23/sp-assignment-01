/*
5.	Problem: Simple Calculator
a.	Write a program to create a simple calculator using the switch-case statement. 
//  The program should perform addition, subtraction, multiplication, and division based on user input.
*/
#include<stdio.h>

int main()
{
    int a, b; scanf("%d %d", &a, &b);
    getchar();
    char ch; scanf("%c", &ch);
    switch ( ch )
    {
        case '+':
        {
            printf("%d\n", a + b);
            break;
        }
        case '-':
        {
            printf("%d\n", a - b);
            break;
        }
        case '*':
        {
            printf("%d\n", a * b);
            break;
        }
        case '/':
        {
            printf("%d\n", a / b);
        }
        default:
        {
            break;
        }
    }
    return 0;
}


/**************************************************************************************************
Sample input:
10 5
+
Sample output:
15

Sample input:
10 5
-
Sample output:
5

Sample input:
10 5
*
Sample output:
50

Sample input:
10 5
/
Sample output:

2
***************************************************************************************************/

