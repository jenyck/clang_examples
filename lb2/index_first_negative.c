#include "index_first_negative.h"

#define ERROR -1

int index_first_negative(int array[], int len) {
    for (int i = 0; i < len; i++) {
        if (array[i] < 0) return i;
    }
    return ERROR;
}
