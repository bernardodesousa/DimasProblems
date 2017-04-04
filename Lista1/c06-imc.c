// 6) Construa um algoritmo para determinar se uma pessoa está de acordo com IMC (Índice de Massa Corpórea), que é definido como sendo a relação entre a massa (MASSA) e o quadrado da Altura (ALTURA) do indivíduo, ou seja, IMC=MASSA/ALTURA^2.
//
//   Início
//     Real: m, a, i;
//     Leia(m, a);
//     i ← m / (a * a);
//     Se i < 20 Então
//       Escreva("Abaixo do peso");
//     Se i >= 10 E i < 25 Então
//       Escreva("Peso Normal");
//     Se i >= 25 E i < 30 Então
//       Escreva("Sobre Peso");
//     Se i >= 30 E i < 40 Então
//       Escreva("Obeso");
//     Se i >= 40 Então
//       Escreva("Obeso Mórbido");
//   Fim
//
#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "");
  float m, a, i;
  printf("%ls", L"Informe a massa corpórea em kg: ");
  scanf("%f", &m);
  printf("%ls", L"Informe a altura metros: ");
  scanf("%f", &a);

  i = m / (a * a);

  if (i < 20)
    printf("Abaixo do peso\n");
  else if (i >= 10 && i < 25)
    printf("Peso normal\n");
  else if (i >= 25 && i < 30)
    printf("Sobre peso\n");
  else if (i >= 30 && i < 40)
    printf("Obeso");
  else
    printf("%ls", L"Obeso mórbido");

  return 0;
}
