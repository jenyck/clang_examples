#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main() {
    char sentence[200];
    char* sentence_ptr = sentence;
    
    scanf("%s", sentence);
    
    char word[200];
    char* word_ptr = word;
    for (sentence_ptr; *sentence_ptr != '\0'; sentence_ptr++) {
        if (isspace(*sentence_ptr)) {
            puts(word);
        }
        else {
            *word_ptr++ = *sentence_ptr;
        }
    }
    *word_ptr = '\0';
    puts(word);
    
    return 0;
}
