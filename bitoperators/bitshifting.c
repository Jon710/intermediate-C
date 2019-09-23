#include <stdio.h>

// var >> numero de posiçoes de bits
// var << numero de posiçoes de bits

void main(void) {
  unsigned int i;
  int j;

  i = 1;

  // shift to the left
  for (j=0; j<4; j++) {
    i = i << 1; // desloca i de 1 a esquerda, que é o mesmo que multiplicar por 2
    printf("deslocamento à esquerda %d: %d\n", j, i);
  }

  // shift to the right
  for (j=0; j<4; j++) {
    i = i >> 1; // desloca i de 1 à direita, que é o mesmo que dividir por 2
    printf("deslocamento à direita %d: %d\n", j, i);
  }
}