#include <stdio.h>

int main() {
    int f = 100;
    int res;
    for (int i = 1; i <= 10; i++) {
    	res += f - i;
    	fprintf(stderr, "%s:%s:%d: res=%d\n",
    		__FILE__, __func__, __LINE__, res);
    }
    return 0;
}

