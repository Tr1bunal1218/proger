#include <stdio.h>

int slen(char *str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

int search(char *str, char *text) {
    int len_str = slen(str);
    int len_text = slen(text);
    for (int i = 0; i < len_text; i++) {
        int flag = 1;
        for (int j = 0; j < len_str; j++) {
            if (text[i + j] != str[j]) {
                flag = 0;
            }
        }
        if (flag) {
            return i;
        }
    }
}

int main() {
    char text[] = "Jenya_Prigozhin";
    char str[] = "nya";
    printf("index: %d\n", search(str,text));
    return 0;
}