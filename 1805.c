// beecrowd | 1805 | [P1] - Natural Sum

#include<stdio.h>

int main()
{
    long long int a, b, n, s; // We have to use long long int because the input range is large (1 ≤ a ≤ b ≤ 10^9)

    scanf("%lld %lld", &a, &b);

    printf("%lld\n", ((b - a + 1) * (2 * a + (b - a))) /2 );

    return 0;
}
