#include <stdio.h>

int main() {
  char name[20];

  printf("¿Cúal es tu nombre?\n");
  scanf("%s", name);

  for (int i=0; i<10; i++) {
    printf("%i - Tu nombre es: %s\n",i + 1 ,name);
  }

  printf("\n\n");

  for (int i=10; i>0; i--) {
    printf("%i - Tu nombre es: %s\n",i ,name);
  }

  return 0;
}