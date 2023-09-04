#include <stdio.h>

 int global = 10; //variável global do tipo inteiro. - se você declara variável global, já consome a memória do computador. Evite-a. Trabalhe com variáveis escopo Local. Variável global só pode ser criada uma vez.

int main(){
  int local = 5;

  printf("global = %i, local = %i\n", global, local);
  
   {
    float local = 2.5f;
    printf("global = %i, local = %f\n", global, local);//%i inteiro - %f float
   }
  
  
  printf("global = %i, local = %i\n", global, local);
  
  return 0;
}