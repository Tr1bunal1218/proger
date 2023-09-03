#include <stdio.h>

int main() {
    int dots = 0, nums = 0;
    char str[50];
    int i = 0;
    //scanf("%s", &str);
    fgets(str, 50, stdin);
    while (str[i] != '\0') {
        if (str[i] > '0' && str[i] < '9') {
            int num = 0;
            while (str[i] > '0' && str[i] < '9') {
                if (num != 0) {
                    num *= 10;
                }
                num += str[i] - '0';
                i++;
            }
            if (num > 255) {
                printf("ERROR VALUE\n");
                return 1; 
            } 
            nums += 1;
            if (str[i] == '.') {
                dots += 1;
            }
            i += 1;
        } 
    }
    if (dots != 3 || nums != 4) {
        printf("ERROR FORMAT\n");
        return 1;  
    }
    return 0;
}