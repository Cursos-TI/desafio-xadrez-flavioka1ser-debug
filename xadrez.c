#include <stdio.h>

void moverTorre(int casas) { // Função recursiva para mover a torre
    if (casas > 0) { // Condição de parada
        printf("Direita\n"); // Ação a ser realizada
        moverTorre(casas - 1); // Chamada recursiva com casas decrementadas
    }
}

void moverRainha (int casas) { // Função recursiva para mover a rainha
    if (casas > 0) { // Condição de parada
        printf("Esquerda\n"); // Ação a ser realizada
        moverRainha(casas - 1); // Chamada recursiva com casas decrementadas
    }
}

void moverBispo (int casas) { // Função recursiva para mover o bispo
    if (casas > 0) { // Condição de parada
        printf("Diagonal Direita para Cima\n"); // Ação a ser realizada
        moverBispo(casas - 1);  // Chamada recursiva com casas decrementadas
    }       
}

int main() { 
    moverTorre(5); // A torre pode se mover 5 casas na horizontal ou vertical
    moverRainha(8); // A rainha pode se mover 8 casas em qualquer direção
    moverBispo(5); // O bispo pode se mover 5 casas na diagonal
    const int cavalo = 3; // O cavalo pode se mover em "L", 3 casas
    int movimento = 1; // Variável para controlar o loop do cavalo

    // Implementação de Movimentação do Cavalo
    printf("O cavalo pode se mover em 'L' %d vezes.\n", cavalo);
    //Utilize uma estrutura de repetição para simular a movimentação do Cavalo em "L".
    for (int i = 0; i < cavalo; i++) { // Estrutura de repetição que executa 3 vezes
        if (i < 2) {
            printf("Movendo o cavalo para cima %d\n", i + 1); // Movimentação em "L"
            continue; // Pula para a próxima iteração
        }

        if (i == 2) {
            printf("Movendo o cavalo para a direita %d\n", cavalo); // Movimentação em "L"
            break; // Sai do loop após a movimentação final
        
        }
    }

    

    return 0;
}
