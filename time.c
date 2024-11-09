#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void printTimeInfo(time_t time) {
    char time_info[26];
    strftime(time_info, 26, "%-S %-m %a\n", gmtime(&time));
    printf("%s", time_info);
}

int main() {
	printTimeInfo(0);
	return 0;
}
