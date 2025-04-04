#include <stdio.h>
#include <limits.h>

/* prints the factorials sum for numbers from 1 to input */

int factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
	int result = 1;
	for (int i = 2; i <= n; ++i) {
            if (result > INT_MAX/i)
                return -1;
	    result *= i;
	}
	return result;
    }
}

void factorial_sum(int n) {
    int result = 0;
    for (int i = 0; i <= n; i++) {
        int f = factorial(i);
	if ((f != -1) && (result < INT_MAX - f)) {
            result += f;
        } else {
	    printf("Error: overload\n");
	    return;
	}
    }
    printf("%i\n", result);
}

int main() {
    int n;
    scanf("%i", &n);
    factorial_sum(n);
    return 0;
}
