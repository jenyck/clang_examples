#include <stdio.h>

int main() {
    puts("Here I lay...");
    putc('\v', stdout);
    puts("Still and breathless...");
    putc('\b', stdout);
    putc('a', stdout);
    putc('\a', stdout);
    return 0;
}
