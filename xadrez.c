#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
   const int movimentoVertical = 2;
   const int movimentoHorizontal = 1;

   printf("Movimento do Cavalo (em L: 2 para baixo e 1 para a esquerda):\n");

   for (int i = 1; i <= movimentoVertical; i++) {
        printf("Baixo\n");
    if(int i == movimentoVertical) {
            int j = 1;
            while (j <= movimentoHorizontal) {
                printf("Esquerda\n");
                j++;   }}}
                printf("\n--- Fim da Simulação do Cavalo ---\n");
    return 0;
}
