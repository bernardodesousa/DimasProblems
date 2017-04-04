// 10) Criar um algoritmo que a partir da idade e massa do paciente calcule a dosagem de determinado medicamento e exiba a receita informando quantas gotas do medicamento o paciente deve tomar por dose. Considere que o medicamento em questão possui 500 mg por ml, e que cada ml corresponde a 20 gotas.
//
//   • Adultos ou adolescentes desde 12 anos, inclusive, se tiverem massa igual ou acima de 60 quilos devem tomar 1000 mg; com massa abaixo de 60 quilos devem tomar 875 mg.
//   • Para crianças e adolescentes abaixo de 12 anos a dosagem é calculada pela massa corpórea conforme a tabela a seguir:
//
// _Massa_em_kg_|_Dosagem_em_mg_
// 5 a 9        |   125
// 9.1 a 16     |   250
// 16.1 a 24    |   375
// 24.1 a 30    |   500
// Acima de 30  |   750
//
//
// Solução proposta
//
// Hardcode the values for efficiency
//
// _mg__|____gotas_____
// 125  |  125/25 = 5
// 250  |  250/25 = 10
// 375  |  375/25 = 15
// 500  |  500/25 = 20
// 750  |  750/25 = 30
// 875  |  875/25 = 35
// 1000 | 1000/25 = 40
// ____________________
//
//   Início
//     Real: massa, idade;
//     Inteiro: gotas;
//     Leia(massa, idade);
//
//     Se idade >= 12 E massa >= 60 Então
//       gotas ← 40;
//     Se idade >=12 E massa < 60 Então
//       gotas ← 35;
//     Se idade < 12 Então
//     Início
//       Se massa >= 5 E massa <= 9 Então
//         gotas ← 5;
//       Se massa > 9 E massa <= 16 Então
//         gotas ← 10;
//       Se massa > 16 E massa <= 24 Então
//         gotas ← 15;
//       Se massa > 24 E massa <= 30 Então
//         gotas ← 20;
//       Se massa > 30 Então
//         gotas ← 30;
//     Fim
//
//     Escreva(gotas);
//   Fim
//
#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "");

  float massa, idade;
  int gotas;
  printf("Informe a massa: ");
  scanf("%f", &massa);
  printf("Informe a idade: ");
  scanf("%f", &idade);

  if (idade >= 12 && massa >= 60)
    gotas = 40;
  else if (idade >= 12 && massa < 60)
    gotas = 35;
  else if (idade < 12){
    if (massa >= 5 && massa <= 9)
      gotas = 5;
    else if (massa > 9 && massa <= 16)
      gotas = 10;
    else if (massa > 16 && massa <= 24)
      gotas = 15;
    else if (massa > 24 && massa <= 30)
      gotas = 20;
    else if (massa > 30)
      gotas = 30;
    else {
      gotas = 0;
      printf("ERRO\n");
    }
  }

  printf("%d gotas", gotas);

  return 0;
}
