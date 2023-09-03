#include <stdio.h>

int convert(char *str, int num) {
    int i = 0;
    while (num) {
        str[i] = num % 10 + '0';
        num /= 10;
        i++;
    }
    for (int j = 0; j < i / 2; j++) {
        char tmp = str[j];
        str[j] = str[i - 1 - j];
        str[i - 1 - j] = tmp; 
    }
    return 0;
}

int main() {
    int num = 12345; //54321
    char str[50];
    convert(str,num);
    printf("%s\n", str);
    return 0;
}