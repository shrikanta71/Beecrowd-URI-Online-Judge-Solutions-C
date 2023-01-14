// beecrowd | 2787 - Chess

#include<stdio.h>

int main()
{
    int row, col;

    scanf("%d %d", &row, &col);

    // If both numbers are odd or even then it will print 1(white), otherwise 0(black).
    if(row%2 == 0 && col%2 == 0)
    {
        printf("1\n");
    }
    else if(row%2 == 1 && col%2 == 1)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }

    return 0;
}
