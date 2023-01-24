//PROGRAMINHA PARA CALCULAR JUROS SIMPLES E COMPOSTOS, QUE ESTOU APREENDENDO ESTUDANDO MATEMÁTICA FINANCEIRA EM 01/2023


#include <stdio.h>

int main(){
  float cap, taxa, tempo, mont,js , jc;
  int opc;
  char nome[100];
  printf("Olá Sr! Primeiramente gostaria de saber qual tipo de juros você quer calcular...\n\nSe for simples digite 1 | montante 2 | Ambos digite 0\n");
  scanf("%i", &opc);

  
  switch(opc){
    case 1: //Calcular apenas o juros simples

  printf("\nÓtimo, vamos calcular o juros simples! Agora me informe os seguintes dados:\nNome:");
  scanf("%s", &nome);
  printf("\nCapital investido:");
  scanf("%f", &cap );
  printf("\nTaxa de rendimento (em  porcentagem):");
  scanf("%f", &taxa);
  printf("\nTempo de investimento:");
  scanf("%f", &tempo);
  printf(" %s, esse é o juros obtido com base no capital de R$:%.2f a uma taxa de %.2f em %.2f meses do ano: %.2f", nome, cap, taxa, tempo, cap * (taxa)/100 * tempo);

    case 2://calcular o montante

    printf("\nÓtimo, Vamos calcular o montante! Agora me informe os seguintes dados:\nNome:");
  scanf("%s", &nome);
  printf("\nCapital investido:");
  scanf("%f", &cap );
  printf("\nTaxa de rendimento (em  porcentagem):");
  scanf("%f", &taxa);
  printf("\nTempo de investimento:");
  scanf("%f", &tempo);
  printf(" %s, esse é o montante obtido com base no capital de R$:%.2f a uma taxa de %.2f em %.2f meses do ano: %.2f", nome, cap, taxa, tempo, cap*(1+(taxa/100)*tempo));

    case 0://realizar os 2 calculos 

    printf("\nÓtimo, Vamos calcular o montante! Agora me informe os seguintes dados:\nNome:");
  scanf("%s", &nome);
  printf("\nCapital investido:");
  scanf("%f", &cap );
  printf("\nTaxa de rendimento (em  porcentagem):");
  scanf("%f", &taxa);
  printf("\nTempo de investimento:");
  scanf("%f", &tempo);

//juros
  printf("\n %s, esse resultado foi obtido com base no capital de R$:%.2f a uma taxa de %.2f(porcento a.m) em %.2f meses do ano:\n\nJUROS******** %.2f *******", nome, cap, taxa, tempo, cap * (taxa)/100 * tempo);

//montante  
  printf("\n\nMONTANTE***** %.2f ******", cap*(1+(taxa/100)*tempo));
     
}
  return 0;
}
