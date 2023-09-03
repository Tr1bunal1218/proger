#include <stdio.h>

int num_get(const char *str) {
    int num = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (num != 0) {
            num *= 10;
        }
        num += str[i] - '0';
    }
    return num;
}

int main() {
    int num = num_get("1337");
    printf("%d\n", num);
    return 0;
}