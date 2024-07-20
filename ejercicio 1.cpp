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

  printf("Seleccione la figura que desea calcular el área:\n");
  printf("1. Círculo\n");
  printf("2. Cuadrado\n");
  printf("3. Triángulo\n");
  printf("Opción: ");
  scanf("%d", &figura);

  switch (figura) {
    case 1:
      printf("Ingrese el radio del círculo: ");
      scanf("%f", &radio);
      printf("El área del círculo es: %.2f\n", calcularAreaCirculo(radio));
      break;
    case 2:
      printf("Ingrese el lado del cuadrado: ");
      scanf("%f", &lado);
      printf("El área del cuadrado es: %.2f\n", calcularAreaCuadrado(lado));
      break;
    case 3:
      printf("Ingrese la base del triángulo: ");
      scanf("%f", &base);
      printf("Ingrese la altura del triángulo: ");
      scanf("%f", &altura);
      printf("El área del triángulo es: %.2f\n", calcularAreaTriangulo(base, altura));
      break;
    default:
      printf("Opción no válida.\n");
  }

  return 0;
}
