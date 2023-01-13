// beecrowd | H-2987 - Balloon of Honor

#include<stdio.h>

int main()
{
    char L;
    int i, n=0;

    scanf("%c", &L);

    for(i=65; i<=L; i++) // The ASCII value of 'A' is 65 so 'i' is start from 65 and the condition here 'L' will convert into ASCII value of input itself.
    {
        n++;
    }
    printf("%d\n", n);

    return 0;
}
