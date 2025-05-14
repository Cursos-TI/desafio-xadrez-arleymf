#include <stdio.h>

int main() {
    // Definindo o número de casas para cada movimento
    const int torre = 5;
    const int bispo = 5;
    const int rainha = 8;
    
    printf("Simulação do movimento da Torre:\n");
    // Torre: movimento horizontal para a direita (usando for)
    for (int i = 0; i < torre; i++) {
        printf("Direita\n");
    }
    
    printf("\nSimulação do movimento do Bispo:\n");
    // Bispo: movimento diagonal (cima e direita) (usando while)
    int contador_bispo = 0;
    while (contador_bispo < bispo) {
        printf("Cima, Direita\n");
        contador_bispo++;
    }
    
    printf("\nSimulação do movimento da Rainha:\n");
    // Rainha: movimento para a esquerda (usando do-while)
    int contador_rainha = 0;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha < rainha);
    
    return 0;
}