#include<stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if ( a + b > c )
    {
        if ( a + c > b )
        {
            if ( b + c > a )
            {
                printf("The triangle is valid");
            }
        }
    }
    else
    {
        printf("The triangle is not valid");
    }
    return 0;
}