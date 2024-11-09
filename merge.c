#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* merge(char* str1, char* str2);

int main()
{
    int str1_len;
    int str2_len;
    scanf("%i %i\n", &str1_len, &str2_len);
    char* str1;
    char* str2;
    
    // Выделить память и считать строки
    str1 = malloc(sizeof(char) * (str1_len + 1));
    str2 = malloc(sizeof(char) * (str2_len + 1));
    fgets(str1, str1_len + 1, stdin);
    getc(stdin);
    fgets(str2, str2_len + 1, stdin);
    printf("%s", str1);
    char* s;
    printf("%s", s = merge(str1, str2));
    free(str1);
    free(str2);
    free(s);
    return 0;
}

char* merge(char* str1, char* str2)
{
    // Опишите функцию
    char* str1_ptr = str1;
    char* str2_ptr = str2;
    char* str1_end = str1 + strlen(str1);
    char* str2_end = str2 + strlen(str2);
    int strlen_result = strlen(str1) + strlen(str2) + 1;
    char* result = malloc(strlen_result);
    char* result_ptr = result;
    while (strlen(result) < strlen_result - 1) {
        if (str1_ptr != str1_end) {
            *result_ptr++ = *str1_ptr++;
        }
        if (str2_ptr != str2_end) {
            *result_ptr++ = *str2_ptr++;
        }
    }
    *result_ptr = '\0';
    return result;
}
