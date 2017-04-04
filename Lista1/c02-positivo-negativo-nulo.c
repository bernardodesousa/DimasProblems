// 2) Escreva um algoritmo para determinar se um dado número N (recebido através do teclado) é POSITIVO, NEGATIVO ou NULO (igual a zero).
//
//   Início
//     Real: n;
//     Leia(n);
//     Se n > 0 Então
//       Escreva("POSITIVO");
//     Se n < 0 Então
//       Escreva("NEGATIVO");
//     Se n = 0 Então
//       Escreva("NULO");
//   Fim
//
#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "");

  float n;
  printf("%ls", L"Informe o número: ");
  scanf("%f", &n);
  if (n > 0)
    printf("POSITIVO");
  else if (n < 0)
    printf("NEGATIVO");
  else
    printf("NULO");

  return 0;
}
