

#include <stdio.h>
#include <string.h>
#include <sys/_types/_null.h>

int ft_strlen(char *str) {
  int i = 0;
  while (str[i]) {
    i++;
  }
  return i;
}

char *ft_strstr(char *stack, char *niddle) {
  if (!niddle || niddle[0] == '\0')
    return stack;

  int begin = 0;
  int i = 0;
  int j = 0;
  while (stack[i] != '\0') {
    if (stack[i] == niddle[j]) {
      if (j == 0)
        begin = i;
      j++;
    }
    if ((niddle[j] == '\0' && ft_strlen(niddle) != j))
      return "(null)";
    i++;
  }
  if (j == 0)
    return "(null)";
  return stack + begin;
}

int ft_compar(char *s1, char *s2) {
  int i = 0;
  while (s1[i] && s2[i]) {
    if (s1[i] != s2[i] && s2[i] != '\0')
      return 0;
    i++;
  }
  return 1;
}

char *ft_strstr2(char *stack, char *niddle) {
  if (!niddle || niddle[0] == '\0')
    return stack;

  int i = 0;
  int j = 0;
  while (stack[i] != '\0') {
    if (ft_compar(stack + i, niddle)) {
      return stack + i;
    }
    i++;
  }
  return "(Null)";
}

char *ft_strstr3(char *stack, char *niddle) {
  if (!niddle || niddle[0] == '\0')
    return stack;

  int i = 0;
  int j = 0;
  while (stack[i] != '\0') {
    j = 0;
    while (niddle[j] != 0 && stack[j + i] == niddle[j])
      j++;
    if (niddle[j] == 0)
      return stack + i;
    i++;
  }
  return "(Null)";
}

int main() {
  char stack[] = "abcdef";
  char niddle[] = "de";

  printf("%s\n", ft_strstr3(stack, niddle));
  printf("%s\n", strstr(stack, niddle));
}
