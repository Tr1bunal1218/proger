#include <stdio.h>

int slen(char *str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

int rem(char *str, char *text) {
    int len_str = slen(str);
    int len_text = slen(text);
    if (len_str < len_text) {
        return 1;
    }
    int count = 0;
    for (int i = 0; i < len_str; i++) {
        if (str[i] == text[count]) {
            count += 1;
        } else {
            count = 0;
        }
        if (count == len_text) {
            for (int j = i + 1; j < len_str; j++) {
                str[j - len_text] = str[j];
            }
            str[len_str - len_text] = '\0';
        }
    }
    return 0;
}

int add(char *str, char *text, int id) {
    int len_str = slen(str);
    int len_text = slen(text);
    for (int i = len_str; i >= id; i--) {
        str[i + len_text] = str[i];
    }
    for (int i = 0; i < len_text; i++) {
        str[id + i] = text[i];
    }
    return 0;
}

int main() {
    char str[50] = "Danila Parshaev";
    rem(str, "Danila");
    add(str, "Ilya", 0);
    printf("%s\n",str);
    return 0;
}