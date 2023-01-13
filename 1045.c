// beecrowd | 1045 - Triangle Types

#include<stdio.h>

int main()
{
    float a, b, c, temp;

    scanf("%f %f %f", &a, &b, &c);

    if(b > a && b > c)
    {
        temp = b;
        b = a;
        a = temp;
    }

    else if(c > a && c > b)
    {
        temp = c;
        c = a;
        a = temp;
    }

// Line 11-23 are used to make 'a' side is the biggest side of the three sides.

    if(a >= b+c)
    {
        printf("NAO FORMA TRIANGULO\n");
    }

    else
    {
        if(a*a == b*b + c*c)
        {
            printf("TRIANGULO RETANGULO\n");
        }

        if(a*a > b*b + c*c)
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }

        if(a*a < b*b + c*c)
        {
            printf("TRIANGULO ACUTANGULO\n");
        }

        if(a == b && b == c)
        {
            printf("TRIANGULO EQUILATERO\n");
        }

        else if(a == b || b == c || c == a)
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}
