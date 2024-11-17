#include <stdio.h>
#include <locale.h>
#include <wchar.h>

int main() {
    setlocale(LC_CTYPE, "");
    wchar_t sentence[201];
    fgetws(sentence, sizeof(sentence)/sizeof(wchar_t), stdin);
    wchar_t* buffer;
    wchar_t* word = wcstok(sentence, L" ,.-", &buffer);
    while (word != NULL) {
        wprintf(L"%ls\n",word);
        word = wcstok(NULL, L" ,.-", &buffer);
    }
    return 0;
}
