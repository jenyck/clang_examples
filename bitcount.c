#include <stdio.h>

int main() {
    unsigned int n;
    scanf("%d", &n);
    printf("%d\n", 8 - __builtin_popcount(n));
    return 0;
}
