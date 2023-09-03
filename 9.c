#include <stdio.h>

int slen(char *str) {
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;
}

int sconcat(char *str1, char *str2) {
    int len1 = slen(str1);
    int len2 = slen(str2);
    for (int i = 0; i < len2; i++) {
        str1[i + len1] = str2[i];
    }
    return 0;
}

int main() {
    char str1[50] = "Arc ";
    char str2[50] = "Warden";
    sconcat(str1, str2);
    printf("%s\n", str1);
    return 0;
}