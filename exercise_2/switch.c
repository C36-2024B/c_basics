#include <stdio.h>

int main() {
  int age;

  printf("¿Cúal es tu edad?\n");
  scanf("%i", &age);

  switch(age) {
    case 67:
    case 66:
    case 65:
      printf("Puedes jubilarte");
      break;
    default:
      printf("No puedes jubilarte");
      break;
  }

  return 0;
}