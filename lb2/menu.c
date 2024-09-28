#include <stdio.h>

#include "index_first_negative.h"
#include "index_last_negative.h"
#include "multi_between_negative.h"
#include "multi_before_and_after_negative.h"

#define MAX_LEN 20

int main() {
    int switcher;
    int array[MAX_LEN];
    char temp;

    scanf("%d", &switcher);

    int len = 0;
    while (scanf("%d%c", &array[len], &temp)) {
        len++;
        /* stop reading if "\n" (== 10) is current char */
        if (temp == 10) break;
    }

    switch (switcher) {
        case 0:
            printf("%d\n", index_first_negative(array, len));
            break;
        case 1:
            printf("%d\n", index_last_negative(array, len));
            break;
        case 2:
            printf("%d\n", multi_between_negative(array, len));
            break;
        case 3:
            printf("%d\n", multi_before_and_after_negative(array, len));
            break;
        default:
            printf("Данные некорректны\n");
    }

    return 0;
}
