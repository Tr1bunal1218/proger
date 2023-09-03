#include <stdio.h>

int slen(char *str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}
void move(char *str) {
    int size = slen(str);
    for (int i = 0; i < size; i++) {    
        str[i] = str[i + 1];
    }
}
int convert(char *str) {
    str[0] = str[0] - 'a' + 'A';
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '_') {
            move(&str[i]);
            str[i] = str[i] - 'a' + 'A';
        }
    }
    return 0;
}

int main() {
    char str[50] = "dan_log";
    convert(str);
    printf("%s\n", str);
    return 0;
}