// beecrowd | 1146 - Growing Sequences

#include<stdio.h>

int main()
{
    int x, i;

    while(1) // This loop will always be true.
    {
        scanf("%d", &x);

        if(x == 0) break;

        else
        {
            printf("1"); // We have to print 1 first to avoid Presentation Error.

            for(i=2; i<=x; i++)
            {
                printf(" %d", i); // Remember to keep a space before %d.
            }

            printf("\n");
        }
    }

    return 0;
}
