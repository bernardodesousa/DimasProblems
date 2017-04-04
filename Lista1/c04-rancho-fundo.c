// 4) A prefeitura de Rancho Fundo abriu uma linha de crédito para seus funcionários. O valor máximo da prestação não poderá ultrapassar 30% do salário bruto. Fazer um algoritmo que permita entrar com o salário bruto e o valor da prestação, e informar se o empréstimo pode ou não ser concedido.
//
//   Início
//     Real: s, p;
//     Leia(s, p);
//     Se p <= s * 0.3 Então
//       Escreva("Pode conceder o empréstimo! :D")
//     Senão
//       Escreva("Prestação alta demais ou salário baixo demais... :(")
//   Fim
//
#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "");
  float s, p;
  printf("%ls", L"Informe o salário do requerente: R$ ");
  scanf("%f", &s);
  printf("%ls", L"Informe o valor da prestação: R$ ");
  scanf("%f", &p);

  if (p <= s * 0.3)
    printf("%ls", L"Pode conceder o empréstimo! :D");
  else
    printf("%ls", L"Prestação alta demais ou salário baixo demais... :(");

  return 0;
}
