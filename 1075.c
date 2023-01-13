// beecrowd | 1075 - Remaining 2

// using do....while loop

#include<stdio.h>

int main()
{
    int N, i;

    scanf("%d", &N);

    i=0;

    do
    {
        if(i%N == 2)
        {
            printf("%d\n", i);
        }

        i++;

    }while(i<=10000);

    return 0;
}



/*

**using while loop


#include<stdio.h>

int main()
{
    int N, i;

    scanf("%d", &N);

    i=0;

    while(i<=10000)
    {
        if(i%N == 2)
        {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;

}





**Using For loop

#include<stdio.h>

int main()
{
    int N, i;

    scanf("%d", &N);

    for(i = 0; i <= 10000; i++)
    {
        if(i % N == 2)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}

**This code can also write this way.

#include<stdio.h>

int main()
{
    int N, i;

    scanf("%d", &N);

    for(i = 0; i <= 10000; i++)
    {
        if(i % N == 0)
        {
            printf("%d\n", i+2);
        }
    }

    return 0;
}
*/
