#include <stdio.h>
#include <stdlib.h>

// Funci�n que genera un n�mero aleatorio entre dos valores enteros
int generarAleatorio(int min, int max) {
  return rand() % (max - min + 1) + min;
}

int main() {
  // Se declaran las variables
  int min, max, cantidad, numero;

  // Se solicita al usuario que ingrese el rango de n�meros aleatorios
  printf("Ingrese el valor m�nimo: ");
  scanf("%d", &min);

  printf("Ingrese el valor m�ximo: ");
  scanf("%d", &max);

  // Se solicita al usuario que ingrese la cantidad de n�meros aleatorios
  printf("Ingrese la cantidad de n�meros aleatorios: ");
  scanf("%d", &cantidad);

  // Se genera y muestra la cantidad de n�meros aleatorios
  for (int i = 0; i < cantidad; i++) {
    numero = generarAleatorio(min, max);
    printf("%d ", numero);
  }

  return 0;
}

