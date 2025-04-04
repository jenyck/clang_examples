#include <regex.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NEW_LINE '\n'
#define NULL_CHAR '\0'
#define END_SENT "POSIX"
#define SIZE_INC 20
#define ERR_ALLOC "Memory not allocated.\n"
#define REG_EXP "((0[1-9]|[12][0-9]|3[01])\\.(0[13578]|1[02])|(0[1-9]|[12][0-9]|30)\\.(0[2469]|11))\\.[0-9]{4}"
#define MAX_MATCH 7

char* read_input(void) {
    int size = SIZE_INC;
    char* sent = (char*)malloc(sizeof(char) * size);
    if (sent == NULL) {
        printf(ERR_ALLOC);
        exit(EXIT_FAILURE);
    }

    int current_position = 0;
    char c;
    while ((c = fgetc(stdin)) != NEW_LINE && c != EOF) {
        if (current_position == size) {
            size += SIZE_INC;
            char* temp = (char*)realloc(sent, sizeof(char) * size);
            if (temp == NULL) {
                free(sent);
                printf(ERR_ALLOC);
                exit(EXIT_FAILURE);
            }
            sent = temp;
        }
        sent[current_position++] = c;
    }
    sent[current_position] = NULL_CHAR;
    return sent;
}

void check_sentence(const char* sent, regex_t* preg) {
    regmatch_t pmatch[MAX_MATCH];
    if (regexec(preg, sent, MAX_MATCH, pmatch, 0) == 0) {
        printf("%s\n", sent);
    }
}

int main(void) {
    regex_t preg;
    regcomp(&preg, REG_EXP, REG_EXTENDED);

    while (1) {
        char* sent = read_input();
        if (strcmp(sent, END_SENT) == 0) {
            regfree(&preg);
            return EXIT_SUCCESS;
        } else {
            check_sentence(sent, &preg);
        }
        free(sent);
    }
}    
