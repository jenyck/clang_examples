#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int is_palindrome(char* word);

int main()
{
    int str_len; // Длина строки
    scanf("%i", &str_len);
    fgetc(stdin);
    char* str;
    // Выделить память и считать строку
    str = malloc(sizeof(char) * (str_len + 1));
    fgets(str, str_len + 1, stdin);
    is_palindrome(str) ? printf("true") : printf("false");
	return 0;
}
        
// Дописать функцию
int is_palindrome(char* word)
{
    char *ptr_start = word;
    
    char *ptr_end = ptr_start + strlen(word) - 1;
    while(ptr_end - ptr_start > 1)
    {
        if (*(ptr_start++) != *(ptr_end--)) {
            return 0;
        }
    }
    
    return 1;
}
