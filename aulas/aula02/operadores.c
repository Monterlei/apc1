#include <stdio.h>

int main(){

  // + - x / / => + - * / 

  int soma = 10 + 2;
  int diferenca = 10 - 2;
  int multiplicacao = 10 * 2;
  int divisao = 10 / 2;

    //numero decimal, colocar casas decimais.
  //C permite a conversão explícita ou implícita. Em conversão implícita, O tipo menor é automaticamente convertido no tipo maior (regra de ouro)
  //Em conversão explícita, o programador indica ao compilador como será a conversão, também chamada de cast, pode levar à perda de informação. Ex: (int) 2.56 é convertido para 2. 
  
  divisao = (int) soma / 2.0f;
  int resto = soma % 2;  //resto da divisão
  printf("soma = %i\n", soma);
  printf("soma = %i\n", soma++);
  printf("soma = %i\n", ++soma);

  soma++; //equivale a soma = soma + 1
  ++soma; // soma + 1 primeiro, depois usa o valor de soma. 
  soma--; // soma = soma - 1
  --soma;// diminui -1 primeiro, depois usa o valor de soma.
}