#include <stdio.h>

int main() {
  int age;

  printf("¿Cúal es tu edad?\n");
  scanf("%i", &age);

  // AND
  if(age < 65 && age > 18) {
    printf("Tu edad esta entre 18 y 65");
  } else {
    printf("Tu edad no esta entre 18 y 65");
  }

  return 0;
}