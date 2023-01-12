// beecrowd | 1020 - Age in Days

#include<stdio.h>

int main()
{
    int d;

    scanf("%d", &d);

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", d / 365, ((d % 365) / 30), (d % 365) % 30);
    // 'd / 365' this will count the years(ano(s)), '((d % 365) / 30)' this will months(mes(es)) and '(d % 365) % 30)' this will days(dia(s))

    return 0;
}
