#include "multi_before_and_after_negative.h"
#include "index_first_negative.h"
#include "index_last_negative.h"

int multi_before_and_after_negative(int array[], int len) {
    int result = 1;
    for (int i = 0; i < index_first_negative(array, len); i++) {
        result *= array[i];
    }
    for (int i = index_last_negative(array, len); i < len; i++) {
        result *= array[i];
    }
    return result;
}
