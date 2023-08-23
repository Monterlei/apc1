/**************************************************************
Autor: Pedro Carneiro
Data: 23/08/2023

Programa Básico em C
***************************************************************

gcc meuprograma.c -o meu 
  squareroot raizquadrada
  gcc arquivo -o saída -lm  junta matematicA cm o codigo
  barra asterisco abre, asterisco barra fecha comentário

  depois executa.  ./meu
*/

#include <stdio.h>
#include <math.h>

// função principal
int main() {
  printf("Olá Mundo!\n");
  printf("Raíz quadrada de 2 é %f\n", sqrt(2));
  
  return 0;
}