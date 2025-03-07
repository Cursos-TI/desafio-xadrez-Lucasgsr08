#include <stdio.h>

// Função recursiva para a Torre (movendo 5 casas para a direita)
void moverTorre(int casas) {
    if (casas == 0) return;  // Caso base: para a recursão quando acabar as casas
    printf("Direita\n");
    moverTorre(casas - 1);  // Chamada recursiva para a próxima casa
}

// Função recursiva para a Rainha (movendo 5 casas para a esquerda)
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para o Bispo (movendo 5 casas na diagonal para cima e direita)
void moverBispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Cima, Direita\n");
    moverBispoRecursivo(casas - 1);
}

// Função para o Bispo usando loops aninhados
void moverBispoLoop(int casas) {
    for (int i = 0; i < casas; i++) {  // Loop externo controla o movimento vertical
        for (int j = 0; j < 1; j++) {  // Loop interno controla o movimento horizontal
            printf("Cima, Direita\n");
        }
    }
}

// Função para movimentar o Cavalo (duas casas para cima e uma para a direita)
void moverCavalo() {
    int movimentosFeitos = 0;

    // Primeiro loop: move 2 casas para cima
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");
        movimentosFeitos++;
    }

    // Linha em branco para separar a próxima parte do movimento
    printf("\n");

    // Segundo loop: move 1 casa para a direita
    int j = 0;
    while (j < 1) {
        if (movimentosFeitos == 2) { // Se já moveu duas casas, segue para a direita
            printf("Direita\n");
            break; // Sai do loop
        }
        j++;
    }
}

// Função principal
int main() {
    // Movimentação da Torre (5 casas para a direita)
    printf("Movimento da Torre:\n");
    moverTorre(5);
    printf("\n");

    // Movimentação da Rainha (5 casas para a esquerda)
    printf("Movimento da Rainha:\n");
    moverRainha(5);
    printf("\n");

    // Movimentação do Bispo (Recursão)
    printf("Movimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(5);
    printf("\n");

    // Movimentação do Bispo (Loops aninhados)
    printf("Movimento do Bispo (Loops Aninhados):\n");
    moverBispoLoop(5);
    printf("\n");

    // Movimentação do Cavalo (2 casas para cima e 1 para a direita)
    printf("Movimento do Cavalo:\n");
    moverCavalo();
    printf("\n");

    return 0;
}
