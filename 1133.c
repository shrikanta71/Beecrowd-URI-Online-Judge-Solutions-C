// beecrowd | 1133 - Rest of a Division

#include<stdio.h>

int main()
{
    int x, y, i, temp;

    scanf("%d %d", &x, &y);

    if(x>y)
    {
        temp = y;
        y = x;
        x = temp;
    }

// Line 11-16 must have to read because otherwise if you input the x and y's value it will not print the right output

    for(i=x+1; i<y; i++)
    {
        if(i%5 == 2 || i%5 == 3)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
