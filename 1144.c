// beecrowd | 1144 - Logical Sequence

#include<stdio.h>

int main()
{
    int n, i;

    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        printf("%d %d %d\n%d %d %d\n", i, i*i, i*i*i, i, i*i+1, i*i*i+1);

        // For every pair 1st line consider a a*a a*a*a and 2nd line a a*a+1 a*a*a+1.
    }

    return 0;
}
