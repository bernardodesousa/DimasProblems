// 4) Construa um algoritmo que receba uma temperatura em Celsius, calcule e mostre essa temperatura em Fahrenheit. Considere que: F = 1,8 x (C + 32).
//
//   Início
//     Real: c, f;
//     Leia(c);
//     f ← (c+32) * 1.8;
//     Escreva(f);
//   Fim
//
#include <stdio.h>

int main(){
  float cel, fah;
  printf("Temperatura em Celsius: ");
  scanf("%f", &cel);
  fah = 1.8 * (cel + 32);
  printf("Temperatura em Fahrenheit: %f", fah);
  return 0;
}
