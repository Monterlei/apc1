#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese_Brazil");
     unsigned int base = 20;
     unsigned int altura = 12 ;
     float area_do_triangulo = base * altura/2 ;
     printf("A área do triângulo é: %.2f \n", area_do_triangulo);
     // gcc   questao02.c -o q2area -lm
     // depois de % ===> .numerodealgarismosdpsdo0. 


  return 0;
}