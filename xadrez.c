#include <stdio.h>

int main() {
    //declarações de variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int torre = 5; // A torre pode se mover 5 casas na horizontal ou vertical
    const int bispo = 5; // O bispo pode se mover 5 casas na diagonal
    const int rainha = 8; // A rainha pode se mover 8 casas em qualquer direção

    // Implementação de Movimentação do Bispo
    printf("O bispo pode se mover %d casas na diagonal.\n", bispo);
   
    //Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    for (int i = 1; i <= bispo; i++) { // Estrutura de repetição que executa 5 vezes
        printf("Movendo o bispo para a diagonal %d\n", i);
    }

    // Implementação de Movimentação da Torre
    printf("A torre pode se mover %d casas na horizontal ou vertical.\n", torre);

    //Utilize uma estrutura de repetição para simular a movimentação da Torre na horizontal e vertical.
    do {
        for (int i = 1; i <= torre; i++) { // Estrutura de repetição que executa 5 vezes
            printf("Movendo a torre para a horizontal %d\n", i); // Movimentação horizontal
            printf("Movendo a torre para a vertical %d\n", i); // Movimentação vertical
        }
    } while (0); // Estrutura de repetição que executa apenas uma vez

    // Implementação de Movimentação da Rainha
    printf("A rainha pode se mover %d casas em qualquer direção.\n", rainha);     

    //Utilize uma estrutura de repetição para simular a movimentação da Rainha em todas as direções.
    while (1) {
        for (int i = 1; i <= rainha; i++) { // Estrutura de repetição que executa 8 vezes
            printf("Movendo a rainha para a horizontal %d\n", i); // Movimentação horizontal
            printf("Movendo a rainha para a vertical %d\n", i); // Movimentação vertical
            printf("Movendo a rainha para a diagonal %d\n", i); // Movimentação diagonal
        }
        break; // Sai do loop após uma iteração
    }




    return 0;
}