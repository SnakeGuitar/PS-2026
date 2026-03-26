#include <stdio.h>

int main()
{
    int i;
    unsigned int j;

    // Ejemplo 1:
    printf("Ejemplo 1\n");
    i = 2147483647;
    printf("i: %d\n", i);
    i++;
    printf("i: %d\n", i);

    j = 4294967295;
    printf("j: %u\n", j);
    j++;
    printf("j: %u\n", j);

    // Ejemplo 2
    printf("\nEjemplo 2\n");
    i = -1;
    unsigned short u;
    u = i;
    printf("i: %d\n", i);
    printf("u: %hu\n", u);

    // Ejemplo 3
    printf("\nEjemplo 3\n");
    char cresult, c1, c2;
    c1 = 100;
    c2 = 27;
    cresult = c1 + c2;
    printf("c1: %d\n", cresult);
    c1 = 100;
    c2 = 28;
    cresult = c1 + c2;
    printf("c2: %d\n", cresult);
}
