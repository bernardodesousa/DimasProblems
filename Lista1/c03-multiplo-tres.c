// 3) Escreva um algoritmo que receba um número e imprima uma das mensagens: “é múltiplo de 3” ou “não é múltiplo de 3”.
//
//   Início
//     Inteiro: n;
//     Leia(n);
//     Se n mod 3 = 0 Então
//       Escreva("é múltiplo de 3");
//     Senão
//       Escreva("não é múltiplo de 3");
//   Fim
//
#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "");
  long n;
  printf("%ls", L"Informe um número: ");
  scanf("%ld", &n);
  if (n % 3 == 0)
    printf("%ls", L"é múltiplo de 3");
  else
    printf("%ls", L"Não é múltiplo de 3");
  return 0;
}
