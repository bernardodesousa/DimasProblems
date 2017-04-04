// 8) Construa um algoritmo que a partir da idade de uma pessoa, determine sua classificação de acordos com os critérios abaixo:
//
//   • maior de idade
//   • menor de idade
//   • pessoa idosa (idade superior ou igual a 65 anos).
//
//   Início
//     Real: i;
//     Leia(i);
//     Se i >= 65 Então
//       Escreva("pessoa idosa");
//     Se i >= 18 E i < 65 Então
//       Escreva ("maior de idade");
//     Se i < 18 Então
//       Escreva ("menor de idade");
//   Fim
//
#include <stdio.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "");
  float i;
  printf("Informe a idade: ");
  scanf("%f", &i);
  if (i >= 65)
    printf("pessoa idosa");
  else if (i >= 18 && i < 65)
    printf("maior de idade");
  else if (i < 18 && i >= 0)
    printf("menor de idade");
  else
    printf("ERRO");
  return 0;
}
