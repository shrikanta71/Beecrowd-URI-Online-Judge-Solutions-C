// beecrowd | 1071 - Sum of Consecutive Odd Numbers I

#include<stdio.h>

int main()
{
    int x, y, i, temp, sum=0;

    scanf("%d %d", &x, &y);
/*
    if(y>x)
    {
        y=temp;
        x=temp;
        y=x;
    }

This part is not mandatory.
But if you write this you don't have to worry about the sequence of input.
Without or with this part program will run.
*/
    if(y>0)
    {
        for(i = y; i<x; i++) // If the 2nd input(y) is positive then i = y
        {
            if(i % 2 != 0)
            {
                sum = sum + i;
            }
        }
        printf("%d\n", sum);
    }
    else
    {
        for(i = y+1 ; i<x; i++) // But if the 2nd input(y) is negative then i = y+1
        {
            if(i % 2 != 0)
            {
                sum = sum + i;
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}
