#include <stdio.h>
#include <string.h>

#define STR_LENGTH 402

int main() {
    char s[STR_LENGTH];
    fgets(s, STR_LENGTH, stdin);

    int len = strlen(s);
    if (len > 0 && s[len - 1] == '\n')
        s[len - 1] = '\0';

    const char delimiters[] = " -,";
    char* word = strtok(s, delimiters);

    while (word != NULL) {
        puts(word);
        word = strtok(NULL, delimiters);
    }
    return 0;
}
