#include <stdio.h>

int main() {
  int age;

  printf("¿Cúal es tu edad?\n");
  scanf("%i", &age);

  if(age >= 65) {
    printf("Puedes jubilarte");
  } else if(age >= 18) {
    printf("Eres mayor de edad");
  } else {
    printf("Eres menor de edad");
  }

  return 0;
}