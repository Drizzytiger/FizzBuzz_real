#include<stdio.h>

int main(void)
{
    int c;
    for(c = 1; c<101;c++)
    {
        if(c % 3 == 0)
        {
            printf("Fizz");
        }
        if(c % 5 == 0)
        {
            printf("Buzz");
        }
        if(( c % 3 != 0) && (c % 5 != 0))
        {
            printf("Number = %d",c);
        }
        printf("\n");
    }
    return 0;
}
