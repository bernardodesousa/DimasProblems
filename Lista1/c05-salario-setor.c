// 5) Construa um algoritmo que receba o Código do Funcionário e o Número de Horas Trabalhadas. O código do funcionário deve constar de 4 dígitos onde o primeiro dígito corresponde ao setor do funcionário e os três últimos correspondem ao número do funcionário. Exemplo: 3452 indica que o funcionário 452 pertence ao setor 3. (Utilize o recurso da divisão inteira para obter o setor do funcionário). Após a entrada de dados, calcule e exiba o salário do funcionário. Considere que :
//
//   • Salário = Horas Trabalhadas X Valor Hora Trabalhada
//   • Se a quantidade de Horas Trabalhadas for maior que 400, o funcionário recebe 10% a mais no Valor da Hora Trabalhada por hora excedente.
//   • O Valor da Hora Trabalhada depende do código do setor do funcionário, sendo que :
//     - Setor 1 : Valor Hora Trabalhada R$ 7,80
//     - Setor 2 : Valor Hora Trabalhada R$ 11,50
//     - Setor 3 : Valor Hora Trabalhada R$ 18,25
//
//   Início
//     Inteiro: cod, setor;
//     Real: horas, sal, faixa1, faixa2;
//     Leia(cod, horas);
//     setor ← cod div 1000;
//     faixa1 ← horas;
//     faixa2 ← 0;
//
//     Se horas > 400 Então
//     Início
//       faixa1 ← 400;
//       faixa2 ← horas - 400;
//     Fim
//
//     Se setor = 1 Então
//       sal ← faixa1 * 7.8 + faixa2 * 8.58;
//     Se setor = 2 Então
//       sal ← faixa1 * 11.5 + faixa2 * 12.65;
//     Se setor = 3 Então
//       sal ← faixa1 * 18.25 + faixa2 * 20,075;
//
//     Escreva(sal);
//
//   Fim
//
#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "");
  int setor;
  long cod;
  float horas, sal, faixa1, faixa2;
  printf("%ls", L"Informe o código do funcionário: ");
  scanf("%ld", &cod);
  printf("%ls", L"Informe o número de horas trabalhadas: " );
  scanf("%f", &horas);

  setor = cod / 1000;
  faixa1 = horas;
  faixa2 = 0;

  if (horas > 400){
    faixa1 = 400;
    faixa2 = horas - 400;
  }

  if (setor == 1){
    sal = faixa1 * 7.8 + faixa2 * 8.58;
  } else if (setor == 2){
    sal = faixa1 * 11.5 + faixa2 * 12.65;
  } else if (setor == 3){
    sal = faixa1 * 18.25 + faixa2 * 20.075;
  } else
    printf("ERRO: código de setor desconhecido.");

  printf("%ls %.2f", L"Salário: R$ ", sal);

  return 0;
}
