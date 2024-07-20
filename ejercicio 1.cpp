#include <stdio.h>
#include <math.h>

// Define PI constant
const float PI = 3.14159265358979323846;

float calcularAreaCirculo(float radio) {
  return PI * pow(radio, 2);
}

float calcularAreaCuadrado(float lado) {
  return lado * lado;
}

float calcularAreaTriangulo(float base, float altura) {
  return (base * altura) / 2;
}

int main() {
  int figura;
  float radio, lado, base, altura;

  printf("Seleccione la figura que desea calcular el �rea:\n");
  printf("1. C�rculo\n");
  printf("2. Cuadrado\n");
  printf("3. Tri�ngulo\n");
  printf("Opci�n: ");
  scanf("%d", &figura);

  switch (figura) {
    case 1:
      printf("Ingrese el radio del c�rculo: ");
      scanf("%f", &radio);
      printf("El �rea del c�rculo es: %.2f\n", calcularAreaCirculo(radio));
      break;
    case 2:
      printf("Ingrese el lado del cuadrado: ");
      scanf("%f", &lado);
      printf("El �rea del cuadrado es: %.2f\n", calcularAreaCuadrado(lado));
      break;
    case 3:
      printf("Ingrese la base del tri�ngulo: ");
      scanf("%f", &base);
      printf("Ingrese la altura del tri�ngulo: ");
      scanf("%f", &altura);
      printf("El �rea del tri�ngulo es: %.2f\n", calcularAreaTriangulo(base, altura));
      break;
    default:
      printf("Opci�n no v�lida.\n");
  }

  return 0;
}
