// Início
//   Real: salario, conta1, conta2;
//   Leia(salario, conta1, conta2);
//   salario ← salario - conta1 * 1.02 - conta2 * 1.02;
//   Escreva(salario);
// Fim
#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "");

  float salario, conta1, conta2;
  scanf("%f %f %f", &salario, &conta1, &conta2);

  salario = salario - conta1 * 1.02 - conta2 * 1.02;

  printf("%f", salario);

  return 0;
}
