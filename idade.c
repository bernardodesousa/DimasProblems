#include <stdio.h>
#include <locale.h>
#include <wchar.h>

int main(){
  setlocale(LC_ALL, "");
  int anoNasc, anoAtual, anos, meses, dias, semanas;
  scanf("%u %u", &anoNasc, &anoAtual);

  anos = anoAtual - anoNasc;
  meses = anos * 12;
  dias = anos * 365;
  semanas = anos * 52;

  printf("%u %s", anos, "\n");
  printf("%u %s", meses, "\n");
  printf("%u %s", dias, "\n");
  printf("%u %s", semanas, "\n");

  return 0;
}
