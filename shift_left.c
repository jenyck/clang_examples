#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int shift;
    scanf("%d %d", &n, &shift);
    for (int i = 0; i < shift; ++i) {
        n *= 2;
	n += 1;
    }
    printf("%d\n", n);
    return 0;
}
