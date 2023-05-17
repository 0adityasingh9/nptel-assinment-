#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    scanf("%s", str);
    int len = strlen(str);
    int longest_run = 1, current_run = 1;
    for (int i = 1; i < len; i++) {
        if (str[i] == str[i-1]) {
            current_run++;
            if (current_run > longest_run) {
                longest_run = current_run;
            }
        } else {
            current_run = 1;
        }
    }
    printf("%d", longest_run);
    return 0;
}