#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int substr(char* str1, char* str2, int** result) {
    int count = 0;
    int str1_len = strlen(str1);
    int str2_len = strlen(str2);
    char* str_ptr = str2;

    for (int i = 0; i <= str2_len - str1_len; i++) {
        if (strncmp(str_ptr++, str1, str1_len) == 0)
            count++;
    }

    if (count == 0) {
        *result = NULL;
        return 0;
    }

    str_ptr = str2;
    *result = (int*)malloc(count * sizeof(int));
    int j = 0;
    for (int i = 0; i <= str2_len - str1_len; i++) {
        if (strncmp(str_ptr++, str1, str1_len) == 0)
            (*result)[j++] = i;
    }

    return count;
}

int main(void) {
    int str1_len;
    int str2_len;
    scanf("%i %i\n", &str1_len, &str2_len);

    char* str1; 
    char* str2; 
    str1 = malloc(str1_len + 1);
    str2 = malloc(str2_len + 1);
    fgets(str1, str1_len + 1, stdin);
    getc(stdin);
    fgets(str2, str2_len + 1, stdin);
    
    int* result;
    int arr_len = substr(str1, str2, &result);
    for (int i = 0; i < arr_len; i++)
        printf("%i ", result[i]);
}
