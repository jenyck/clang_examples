#include <stdio.h>

/* tests specificators of scanf and printf */

int main(void) {
    unsigned int b;
    double a;
    scanf("%lf %x", &a, &b);
    printf("%-25.10f%6x\n", a, b);
}
