// 1) Escreva um algoritmo que leia um número e o imprima caso ele seja maior que 20.
//
//   Início
//     Real: n;
//     Leia(n);
//     Se n > 20 Então
//       Escreva(n);
//   Fim
//
#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "");
  float n;
  printf("%ls", L"Informe um número: ");
  scanf("%f", &n);
  if (n > 20)
    printf("%f", n);
  return 0;
}
