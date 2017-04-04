// 6) Construa um algoritmo que receba o número de horas trabalhadas, o valor do salário mínimo e o número de horas extras trabalhadas. Calcule e mostre o salário a receber seguindo as regras:
//
//   • a hora trabalhada vale 1/8 do salário mínimo;
//   • a hora extra vale ¼ do salário mínimo;
//   • o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada;
//   • a quantia a receber pelas horas extras equivale ao número de horas extras trabalhadas multiplicado pelo valor da hora extra;
//   • o salário a receber equivale ao salário bruto mais a quantia a receber pelas horas extras.
//
//   Início
//     Real: hTrab, min, hExt, sal;
//     Leia(hTrab, min, hExt);
//     sal ← (hTrab * min / 8) + (hExt * min / 4);
//     Escreva(sal);
//   Fim
//
#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "");
  float hTrab, min, hExt, sal;
  printf("%ls", L"Horas trabalhadas: ");
  scanf("%f", &hTrab);
  printf("%ls", L"Salário mínimo: R$ ");
  scanf("%f", &min);
  printf("%ls", L"Horas extra trabalhadas: ");
  scanf("%f", &hExt);

  // sal = (hTrab * min / 8) + (hExt * min / 4);
  sal = (hTrab*min+2*hExt*min)/8;

  printf("%ls", L"Salário: R$ ");
  printf("%.2f", sal);
  return 0;
}
