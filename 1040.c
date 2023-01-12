// beecrowd | 1040 - Average 3

#include<stdio.h>

int main()
{
    float a, b, c, d, avg, x, avg_2;

    scanf("%f %f %f %f", &a, &b, &c, &d); // This are the 4 subjects point

    avg = (a*2 + b*3 + c*4 + d*1) / 10.0; //Remember the weights of a, b, c and d are 2, 3, 4 and 1.

    if(avg >= 7.0)
    {
        printf("Media: %.1f\nAluno aprovado.\n", avg);
    }

    else if(avg >= 5.0)
    {
        printf("Media: %.1f\nAluno em exame.\n", avg);

        scanf("%f", &x);

        printf("Nota do exame: %.1f\n", x);

        avg_2 = (avg + x) / 2.0; // Here x is "Nota do exame: " (Exam score)

        if(avg_2 >= 5.0)
        {
                printf("Aluno aprovado.\nMedia final: %.1f\n", avg_2);
        }
        else
        {
            printf("Aluno reprovado.\nMedia final: %.1f\n", avg_2);
        }
    }

    else
    {
        printf("Media: %.1f\nAluno reprovado.\n", avg);
    }

    return 0;
}
