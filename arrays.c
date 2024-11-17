#include <stdio.h>

int main() {
    int arr[70][27][68][49];
    arr[0][0][0][0] = 1;
    printf("%p", arr);
    return 0;
}
