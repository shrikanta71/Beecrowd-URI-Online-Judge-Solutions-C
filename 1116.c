// beecrowd | 1116 - Dividing X by Y

#include<stdio.h>

int main()
{
    float n, x, y, i;

    scanf("%f", &n);

    for(i=1.0; i<=n; i++)
    {
        scanf("%f %f", &x, &y);

        if(y == 0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            printf("%.1f\n", x/y);
        }
    }


    return 0;
}
