// 1) Construa um algoritmo que receba o valor do salário mínimo e o valor do salário de um funcionário, calcule e mostre a quantidade de salários mínimos que ganha esse funcionário.
//
//   Início
//     Real: salario, minimo, razao;
//     leia(salario, minimo);
//     razao ← salario/minimo;
//     Escreva(razao);
//   Fim
//
#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "");
  double salario, minimo, razao;
  printf("%ls", L"Informe o salário: ");
  scanf("%lf", &salario);
  printf("%ls", L"Informe o salário mínimo: ");
  scanf("%lf", &minimo);

  razao = salario/minimo;

  printf("%ls %f", L"Razão: ", razao);

  return 0;
}
