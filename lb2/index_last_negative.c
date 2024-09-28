#include "index_last_negative.h"

int index_last_negative(int array[], int len) {
    int res_index = -1;
    for (int i = 0; i < len; i++) {
        if (array[i] < 0) res_index = i;
    }
    return res_index;
}
