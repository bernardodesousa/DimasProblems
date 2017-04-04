// 5) Construa um algoritmo que receba a quantidade em dinheiro em reais que uma pessoa que vai viajar possui. Essa pessoa vai passar por vários países e precisa converter seu dinheiro em dólares, marco alemão e libra esterlina. Sabe-se que a cotação do dólar é de R$ 3,20, do marco alemão é de R$ 2,85 e da libra esterlina é de R$ 3,55. O algoritmo deve fazer as conversões e mostrá-las.
//
//   Início
//     Real: r, d, m, l;
//     Leia(r);
//     d ← r / 3.2;
//     m ← r / 2.85;
//     l ← r / 3.55;
//     Escreva(d, m, l);
//   Fim
//
#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "");
  float r, d, m, l;
  printf("Valor em Reais: ");
  scanf("%f", &r);

  d = r / 3.2;
  m = r / 2.85;
  l = r / 3.55;

  printf("US$: %.2f\nDE$: %.2f\nGB$: %.2f\n", d, m, l);

  return 0;
}
