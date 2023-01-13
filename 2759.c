// beecrowd | 2759 - Input and Output Character

#include<stdio.h>

int main()
{
    char x, y, z; // We have to use char as data type because we might have to print letters or semboles.

    scanf("%c %c %c", &x, &y, &z);

    printf("A = %c, B = %c, C = %c\n", x, y, z);
    printf("A = %c, B = %c, C = %c\n", y, z, x);
    printf("A = %c, B = %c, C = %c\n", z, x, y);

    return 0;
}
