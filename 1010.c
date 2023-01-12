// beecrowd | 1010 - Simple Calculate

#include<stdio.h>

int main()
{
    int a, b, x, y;
    float p, m;

    scanf("%d %d %f", &a, &b, &p);
    scanf("%d %d %f", &x, &y, &m);

    printf("VALOR A PAGAR: R$ %.2f\n", b * p + y * m);

    return 0;
}
