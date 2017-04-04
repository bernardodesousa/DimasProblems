// 2) Construa um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
//
//   • A idade dessa pessoa em anos;
//   • A idade dessa pessoa em meses;
//   • A idade dessa pessoa em dias;
//   • A idade dessa pessoa em semanas;
//
//   Início
//     Inteiro: anoNasc, anoAtual, anos, meses, dias, semanas;
//     Leia(anoNasc, anoAtual);
//
//     anos ← anoAtual - anoNasc;
//     meses ← anos * 12;
//     dias ← anos * 365;
//     semanas ← anos * 52;
//
//     Escreva(anos, meses, dias, semanas);
//   Fim
//
#include <stdio.h>
#include <locale.h>
#include <wchar.h>

int main(){
  setlocale(LC_ALL, "");
  int anoNasc, anoAtual, anos, meses, dias, semanas;
  printf("%s", "Informe o ano de nascimento: ");
  scanf("%u", &anoNasc);
  printf("%s", "Informe o ano atual: ");
  scanf("%u", &anoAtual);

  anos = anoAtual - anoNasc;
  meses = anos * 12;
  dias = anos * 365;
  semanas = anos * 52;

  printf("%s %u %s", "\nAnos: ", anos, "\n");
  printf("%s %u %s", "Meses: ", meses, "\n");
  printf("%s %u %s", "Dias: ", dias, "\n");
  printf("%s %u %s", "Semanas: ", semanas, "\n");

  return 0;
}
