#include <stdio.h>

char to_lower(const char symbol) {
    if (symbol >= 'A' && symbol <= 'Z') {
        return symbol - 'A' + 'a';
    }
    return symbol;
}

int scmp(char *str1, char *str2) {
    for (int i = 0; str1[i] != '\0'; i++) {
        if (to_lower(str1[i]) < to_lower(str2[i])) {
            return -1;
        }
        if (to_lower(str1[i]) > to_lower(str2[i])) {
            return 1;
        }
    }
    return 0;
}

int main() {
    char str1[50] = "WaRdEn";
    char str2[50] = "wArDeN";
    printf("%d\n", scmp(str1, str2));
    return 0;
}