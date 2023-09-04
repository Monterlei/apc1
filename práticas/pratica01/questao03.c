#include <stdio.h> 


// Faça um programa em C que calcule o perímetro de uma pizza ( P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.
   int main() {

     const float PI = 3.1416f; // float para numeros quebrados. 'a' ou numero 3.14. Aspas para caractere, numero inteiro.
     
     unsigned int r = 10;
     float perimetro_pizza = 2 * PI * r;
     printf("O perímetro da pizza é de: %.2f centímetros.", perimetro_pizza); //numeros flutuantes, numeros após a vírgula.
     
     
     return 0;

   }