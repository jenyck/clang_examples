#include <stdio.h>
#include <stdlib.h>

int compare(const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main() {
    int arr[100];
    
    for (int i = 0; i < 100; i++) {
        scanf("%d", &arr[i]);
    }
    int key = 0;
    int* zero_ptr = (int*)bsearch(&(int){0}, arr, 100, sizeof(int), compare);
    if (zero_ptr != NULL) puts("exists");
    else puts("doesn't exist");
    return 0;
}
