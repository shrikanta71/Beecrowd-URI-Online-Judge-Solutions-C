// beecrowd | 1080 - Highest and Position

// using while and do........while loop

#include<stdio.h>

int main()
{
    int n, i, max = 0, p;

    i = 1;
    do
    {
        scanf("%d", &n);

            while(n > max)
            {
                max = n;
                p = i;
            }
        i++;

    }while(i <= 100);

    printf("%d\n%d\n", max, p);

    return 0;
}

/*

**using for loop

#include<stdio.h>

int main()
{
    int n, i, max=0, p;

    for(i=1 ; i<=100; i++)
    {
       scanf("%d", &n);

       if(n > max)
       {
           max = n;
           p = i;
       }
    }
    printf("%d\n%d\n", max, p);

    return 0;
}
*/
