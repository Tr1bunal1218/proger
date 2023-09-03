#include <stdio.h>

int scpy(char *str1, char *str2) {
    for (int i = 0; str1[i] != '\0'; i++) {
        str2[i] = str1[i]; 
    }
    return 0;
}

int main() {
    char str1[50] = "Arc Wagner";
    char str2[50] = "";
    scpy(str1, str2);
    printf("%s\n", str2);
    return 0;
}