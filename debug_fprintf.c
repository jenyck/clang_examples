#include <stdio.h>

int main() {
    int f = 100;
    /*
     * There was only int res; without initialising it as a zero.
     * Very interesting: didn't notice when it compiled by gcc correctly,
     * but when compiled by tcc, the res variable wasn't initialised
     * by zero value, instead, it was initialised as a random number.
     */
    int res = 0;
    for (int i = 1; i <= 10; i++) {
    	res += f - i;
    	fprintf(stderr, "%s:%s:%d: res=%d\n",
    		__FILE__, __func__, __LINE__, res);
    }
    return 0;
}

