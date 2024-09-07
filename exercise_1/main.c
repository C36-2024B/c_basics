#include <stdio.h>

int main() {
  char inicial[] = "E", name[] = "Erick";
  int edad = 18;
  float height = 1.70;

  printf("Value for inicial: %s\n", inicial);
  printf("Value for name: %s\n", name);
  printf("Value for edad: %i\n", edad);
  printf("Value for height: %.2f\n", height);
  printf("Memory address for edad: %i", &edad);

  return 0;
}