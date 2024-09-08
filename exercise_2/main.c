#include <stdio.h>

int main() {
  int age;
  char name[20];
  float height;

  printf("¿Cúal es tu nombre?\n");
  scanf("%s", name);

  printf("¿Cúal es tu edad?\n");
  scanf("%i", &age);

  printf("¿Cúal es tu estatura?\n");
  scanf("%f", &height);

  printf("Tu nombre es: %s\n", name);
  printf("Tu edad es: %i\n", age);
  printf("Tu estatura es: %.2f", height);

  return 0;
}