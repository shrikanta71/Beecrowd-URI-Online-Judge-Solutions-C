// beecrowd | 1101 - Sequence of Numbers and Sum

#include<stdio.h>

int main()
{
    int M, N, temp, i, j;

    for(j=0; j<100; j++)
    {
        scanf("%d %d", &M, &N);

        if( M<=0 || N<=0 ) break;

        if(M>N)
        {
            temp=M;
            M=N;
            N=temp;
        }
        int sum=0;

/* sum =0 have to given here or after printing the sum.
otherwise next time if you take input for M and N the sum will remain previous.
like M=5,N=3,sum=12. now for the next time M=6,N=3,sum=30 because of previous sum.
*/
        for(i=M; i<=N; i++)
        {

            printf("%d ",i);

            sum = sum+i;
        }
        printf("Sum=%d\n",sum);
    }

    return 0;
}

