// beecrowd | 1042 - Simple Sort

#include<stdio.h>

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c); // As the input contains three integer numbers.

        if(a>b && a>c)
        {
            if(b>c)
            {
                printf("%d\n%d\n%d\n\n", c, b, a);

            }
            else
            {
                printf("%d\n%d\n%d\n\n", b, c, a);
            }
        }
        else if(b>a && b>c)
        {
            if(a>c)
            {
                printf("%d\n%d\n%d\n\n", c, a, b);

            }
            else
            {
                printf("%d\n%d\n%d\n\n", a, c, b);
            }
        }
        else if(c>a && c>b)
        {
            if(a>b)
            {
                printf("%d\n%d\n%d\n\n", b, a, c);

            }
            else
            {
                printf("%d\n%d\n%d\n\n", a, b, c);
            }
        }

        printf("%d\n%d\n%d\n", a, b, c); // As we have to print the values in the sequence as they were readed.

        return 0;
}
