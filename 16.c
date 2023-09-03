#include <stdio.h>

int Sum(char *str) {
    int sum = 0;
    int num = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            num = 0;
            continue;
        }
        if (num != 0) {
            num *= 10;
        }

        num += str[i] - '0';

        if (num % 2 == 0) {
            sum += num;
        }
    }
    return sum;
}

int main() {
    char str[50] = "1 16 16";
    printf("%d\n", Sum(str));
    return 0;
}