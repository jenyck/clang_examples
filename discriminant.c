#include <stdio.h>

float discriminant(float a, float b, float c) {
    return b*b - 4*a*c;
}

int main() {
    float a, b, c;
    float d;
    scanf("%f %f %f", &a, &b, &c);
    d = discriminant(a, b, c);
    printf("%f\n", d);
    return 0;
}

