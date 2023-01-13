// beecrowd | 1957 -  Converting to Hexadecimal

#include<stdio.h>

int main()
{
    long long int d; //We have to use long long int because the input range is large (1 ≤ d ≤ 2 x 10^9)

    scanf("%lld", &d);

    printf("%X\n", d); // To print Hexadecimal %X is used

    return 0;
}
