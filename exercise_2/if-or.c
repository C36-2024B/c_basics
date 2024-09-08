#include <stdio.h>

int main() {
  int age;

  printf("¿Cúal es tu edad?\n");
  scanf("%i", &age);

  // OR
  if(age < 64 || age > 66) {
    printf("Entraste al if");
  } else {
    printf("Entraste al else");
  }

  return 0;
}