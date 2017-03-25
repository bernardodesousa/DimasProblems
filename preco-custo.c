#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "");
  float Custo, Preco;
  printf("%ls", L"Informe o preço de fábrica:\nR$ ");
  scanf("%f", &Custo);
  if (Custo < 12000)
    Preco = Custo * 1.05;
  if (Custo >= 12000 && Custo < 15000)
    Preco = Custo * 1.25;
  if (Custo >= 25000)
    Preco = Custo * 1.35;
  printf("%ls", L"Preço final: R$");
  printf("%10.2f", Preco);

  return 0;
}
