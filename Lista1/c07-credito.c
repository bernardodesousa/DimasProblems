// 7) A CEF concederá um crédito especial com juros de 2% aos seus clientes de acordo com o saldo médio no último ano. Construa um algoritmo que leia o saldo médio de um cliente e calcule o valor do crédito de acordo com a tabela abaixo. Faça a exibição do saldo médio e do valor de crédito.
//
//   Média de Saldo |  Crédito
// Abaixo de 1000   | R$ 0,00
// A partir de 1000 | R$ 10 000,00
// Acima de 2000    | R$ 20 000,00
//
//
//   Início
//     Real: sMedio, credito;
//     Leia(sMedio);
//     credito ← 0;
//     Se sMedio >= 1000 E sMedio < 2000 Então
//       credito ← 10000;
//     Se sMedio >= 2000 Então
//       credito ← 20000;
//     Escreva(credito);
//   Fim
//
#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "");
  float sMedio, credito;
  printf("%ls", L"Informe o saldo médio: R$ ");
  scanf("%f", &sMedio);
  credito = 0;
  if (sMedio >= 1000 && sMedio < 2000)
    credito = 10000;
  else if (sMedio >= 2000)
    credito = 20000;
  printf("%ls %.2f", L"Crédito: R$ ", credito);
  return 0;
}
