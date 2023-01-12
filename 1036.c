// beecrowd | 1036 - Bhaskara's Formula

#include<stdio.h>
#include<math.h>

int main()
{
    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);

    if((b*b - 4*a*c) < 0 || (b*b - 4*a*c) == b*b)
/* If (b*b - 4*a*c) this value is less than 0 then the result will impossible(Complex number)
or if it equal to b*b then the result will impossible(Incoherent). */
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        printf("R1 = %.5lf\n", (-b + sqrt(b*b - 4*a*c)) / (2*a));

        printf("R2 = %.5lf\n", (-b - sqrt(b*b - 4*a*c)) / (2*a));
    }

    return 0;
}

/*
As we know 'bhaskara’s formula' is used in 'rational expression'.
Like ax^2 + bx + c = 0 for this the 'bhaskara’s formula' will be
        x1 = (-b + sqrt(b*b - 4*a*c)) / 2*a
        x2 = (-b - sqrt(b*b - 4*a*c)) / 2*a
*/
