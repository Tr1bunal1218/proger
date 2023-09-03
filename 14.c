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
    while (size >= 0) {
        str[size + 1] = str[size];
        size -= 1;
    }
}
int convert(char *str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] - 'A' + 'a';
            if (count > 0) {
                move(&str[i]);
                str[i] = '_';
            }
            count += 1;
        }
    }
    return 0;
}

int main() {
    char str[50] = "DanLog";
    convert(str);
    printf("%s\n", str);
    return 0;
}