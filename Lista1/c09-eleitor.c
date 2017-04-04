// 9) Crie um algoritmo que leia a idade de uma pessoa e informe a sua classe eleitoral:
//
//   • não eleitor (abaixo de 16 anos)
//   • eleitor obrigatório (entre 18 e 65 anos)
//   • eleitor facultativo (de 16 até 18 anos e maior de 65 anos, inclusive)
//
//   Início
//     Real: i;
//     Leia(i);
//     Se i < 16 Então
//       Escreva("não eleitor");
//     Se i >= 16 E i < 18 OU i >= 65 Então
//       Escreva("eleitor facultativo");
//     Se i >= 18 E i < 65 Então
//       Escreva("eleitor obrigatório");
//   Fim
//
#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "");
  float i;
  printf("Informe a idade: ");
  scanf("%f", &i);
  if (i < 16 && i >= 0)
    printf("%ls", L"Não é eleitor.");
  else if (i >= 16 && i < 18 || i >= 65)
    printf("Eleitor facultativo");
  else if (i >= 18 && i < 65)
    printf("%ls", L"Eleitor obrigatório");
  else
    printf("ERRO");
  return 0;
}
