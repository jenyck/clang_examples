#include <stdio.h>

int main() {
    char a[100];
    fgets(a, 100, stdin);
    char *chr = a;
    while (*chr != '\0') {
        if (((chr >= 48) && (chr <= 57)) || ((chr <= 122) &&
            (chr >= 97)) || ((chr >= 65) && (chr <= 90)))
            putc(*chr++, stdout);
    }
    return 0;
}

