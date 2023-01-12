// beecrowd | 1021 - Banknotes and Coins

#include<stdio.h>

int main()
{
    double l;

    int n, m;

    scanf("%lf", &l);

    n = l*100; // This is to convert the floating number into integer.

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n/10000);
    printf("%d nota(s) de R$ 50.00\n", (n%10000)/5000);
    printf("%d nota(s) de R$ 20.00\n", ((n%10000)%5000)/2000);
    printf("%d nota(s) de R$ 10.00\n", (((n%10000)%5000)%2000)/1000);
    printf("%d nota(s) de R$ 5.00\n", ((((n%10000)%5000)%2000)%1000)/500);
    printf("%d nota(s) de R$ 2.00\n", (((((n%10000)%5000)%2000)%1000)%500)/200);

    m = (((((n%10000)%5000)%2000)%1000)%500)%200;

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", m/100);
    printf("%d moeda(s) de R$ 0.50\n", (m%100)/50);
    printf("%d moeda(s) de R$ 0.25\n", ((m%100)%50)/25);
    printf("%d moeda(s) de R$ 0.10\n", (((m%100)%50)%25)/10);
    printf("%d moeda(s) de R$ 0.05\n", ((((m%100)%50)%25)%10)/5);
    printf("%d moeda(s) de R$ 0.01\n", (((((m%100)%50)%25)%10)%5)/1);

    return 0;
}
