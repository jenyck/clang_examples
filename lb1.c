#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void inplace_reverse(char * str)
{
  if (str)
  {
    char * end = str + strlen(str) - 1;

#   define XOR_SWAP(a,b) do\
    {\
      a ^= b;\
      b ^= a;\
      a ^= b;\
    } while (0)

    while (str < end)
    {
      XOR_SWAP(*str, *end);
      str++;
      end--;
    }
#   undef XOR_SWAP
  }
}

int main() {
    char text[100][100];
    char buf[1010];
    fgets(buf, 1010, stdin);
    buf[strlen(buf) - 1] = '\0';
    int i = 0;
    char* token = strtok(buf, " ");
    while (token != NULL) {
        strcpy(text[i++], token);
        token = strtok(NULL, " ");
    }

    char str1[100];
    char str2[100];
    strcpy(str1, text[i-1]);
    for (int j = 0; j < strlen(str1); j++) {
        str1[j] = tolower(str1[j]);
    }
    strcpy(str2, str1);
    inplace_reverse(str2);
    strrev();
    char tmp[100];
    for (int j = 0; j < i -1; j++) {
        strcpy(tmp, text[j]);
        if (strstr(str1, tmp) != NULL || strstr (str2, tmp) != NULL) {
            puts("1");
            return 0;
        }
    }

    puts("0");

    return 0;
}
