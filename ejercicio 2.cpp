#include <stdio.h>
#include <stdlib.h>

// Función que genera un número aleatorio entre dos valores enteros
int generarAleatorio(int min, int max) {
  return rand() % (max - min + 1) + min;
}

int main() {
  // Se declaran las variables
  int min, max, cantidad, numero;

  // Se solicita al usuario que ingrese el rango de números aleatorios
  printf("Ingrese el valor mínimo: ");
  scanf("%d", &min);

  printf("Ingrese el valor máximo: ");
  scanf("%d", &max);

  // Se solicita al usuario que ingrese la cantidad de números aleatorios
  printf("Ingrese la cantidad de números aleatorios: ");
  scanf("%d", &cantidad);

  // Se genera y muestra la cantidad de números aleatorios
  for (int i = 0; i < cantidad; i++) {
    numero = generarAleatorio(min, max);
    printf("%d ", numero);
  }

  return 0;
}

