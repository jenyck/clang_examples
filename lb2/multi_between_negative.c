#include "multi_between_negative.h"
#include "index_first_negative.h"
#include "index_last_negative.h"

int multi_between_negative(int array[], int len) {
    int result = 1;
    for (int i = index_first_negative(array, len);
          i < index_last_negative(array, len); i++) {
        result *= array[i];
    }
    return result;
}
