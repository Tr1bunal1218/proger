#include <stdio.h>

int is_correct(char symbol, char *nabor) {
  for (int i = 0; nabor[i] != '\0'; i++) {
    if (nabor[i] == symbol)
      return 1;
  }
  return 0;
}
int counter(char *str, char *nabor) {
  int count = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    if (is_correct(str[i], nabor)) {
      count++;
    }
  }
  return count;
}

int main() {
  char str[50] = "petya 11 ee 22 yda";// 7
  char nabor[50] = "12e";
  printf("%d\n", counter(str, nabor));
  return 0;
}