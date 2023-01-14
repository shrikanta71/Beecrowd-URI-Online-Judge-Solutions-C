// beecrowd | 1759 - Ho Ho Ho

#include<stdio.h>

int main()
{
    int n, i;

    scanf("%d", &n);

    for(i=1; i<n; i++) // Here the loop will not run n numbers of time because we have to print 'HO!'.
    {
        printf("Ho ");
    }
    printf("Ho!\n");

    return 0;
}
