#include <stdio.h>

int main() {
    char buffer[16];
    gets(buffer); // Vulnerable to buffer overflow
    printf(buffer);
    printf("\n");
    return 0;
}
