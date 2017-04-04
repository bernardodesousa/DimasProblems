// Início
//   Real: salario, conta1, conta2;
//   Leia(salario, conta1, conta2);
//   salario ← salario - conta1 * 1.02 - conta2 * 1.02;
//   Escreva(salario);
// Fim
//
#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "");

  float salario, conta1, conta2;
  printf("%ls", L"Informe o salário: ");
  scanf("%f", &salario);
  printf("%ls", L"Primeira conta: ");
  scanf("%f", &conta1);
  printf("%ls", L"Segunda conta: ");
  scanf("%f", &conta2);

  salario = salario - conta1 * 1.02 - conta2 * 1.02;

  printf("%ls", L"Restante: R$ ");
  printf("%.2f", salario);
  printf("\n");

  return 0;
}
