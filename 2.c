#include <stdio.h>

int main() {
    char symbols[] = "leon";
    char str[] = "leonardo dicaprio";
    char result[sizeof(str)];

    for (int i = 0; i < sizeof(str); i++) {
        int correct = 0;
        for (int j = 0; j < sizeof(symbols); j++) {
            if (str[i] == symbols[j]) {
                correct = 1;
            }
        }
        if (correct) {
            result[i] = str[i];
        }
        else {
            result[i] = '\0';
        }
    }
    printf("%s\n", result);
    return 0;
}