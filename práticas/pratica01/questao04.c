#include <stdio.h>
#include <locale.h>
 //Fa�a um programa que C que calcule os impostos inclu�dos no pre�o de um produto (pre�o final = (1 + ICMS + COFINS + PIS/PASEP) x pre�o inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%.
int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    const float ICMS = 0.17f;
    const float CONFINS = 0.076f;
    const float PIS_PASEP = 0.0165f;
    // Dados dos Impostos sobre o produto.
    //c�lculo dos impostos inclu�dos.
    const float preco_produto = 1 + ICMS + CONFINS + PIS_PASEP;
    printf("O pre�o do produto final com os impostos inclu�dos � de: %.2f \n", preco_produto );
    
    return 0;
}