#include <stdio.h>
#include <stdlib.h>

int main() {
    long *array = malloc(sizeof(long) * 200);
    printf("%p\n", array);
    printf("%p\n", &array[200]);
    free(array);
    return 0;
}
