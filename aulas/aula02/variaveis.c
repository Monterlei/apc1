#include <stdio.h>

int main() {
   //variaveis
  char caracter = 0 // ou '\0' '\n' é enter.;  'a', 'b', 'c' ; -128 à 127 números.  - 1 byte Sempre atribua um valor inicialmente para não dar erro de lixos de memória no seu programa.
  
  char i = 0;
  char j = 0;   // coloque variáveis sempre separadas para auxiliar.

  unsingned char caracter_sem_sinal; // caracteres positivos por exemplo. 0 A 255. De quatro bytes do inteiro, consigo ir para somente 1 bytes. somente funciona no char e inteiro. Unsigned char garante que não tem valor negativo numa conta por exemplo.

  unsigned int inteiro_sem_sinal; //0 a 42.949.67295

  unsigned short int inteiro_curto_Sem_sinal;

  long int inteiro_longo; - // 8 bytes. AUMENTA A FAIXA DE VALORES. 

  unsigned long int inteirolongosemsinal; 

  short int inteiro_curto; // irá para 2 bytes. LER CONTEÚDO.

  char nomevariavel; 

  char string [10] = "um texto";   // "um texto" guarda 10 caracteres.
   
  
  int inteiro;  // -1, 0, 1 ....  -2147483648 a 2147... - 4 bytes  - verdadeiro ou falso. não tem na linguagem C. Use Inteiro. Falso = 0  Verdadeiro = 1.
   
  float flutuante; // 0.123456f coloque o f no final - 4 bytes
  
   double duplo; // 0.12345655214253245 o duplo aceita mais casas decimais. Tome cuidado com o espaço do distositivo, use sempre o flutuante para numeros menores. - 8 bytes
   void nada; 

   
  
   return 0;
}