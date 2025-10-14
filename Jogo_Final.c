#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define PEDRA 0
#define PAPEL 1 
#define TESOURA 2
#define LAGARTO 3
#define SPOCK 4

int main(){

    srand(time(NULL));

    int jogador, computador, pontos_jogador = 0, pontos_computador = 0, i = 0;
    int jogo[5][3] = {{TESOURA, LAGARTO, 2}, {PEDRA, SPOCK, 1}, {PAPEL, LAGARTO, 3}, {SPOCK, PAPEL, 4}, {TESOURA, PEDRA, 5}};
    
    do {
        printf("Escolha: 0 (Pedra), 1 (Papel), 2 (Tesoura), 3 (Lagarto), 4 (Spock): ");
        scanf("%d", &jogador);
        computador = rand() % 5; 
        printf("Computador escolheu: %d\n", computador);
        if (jogador == computador) {
            printf("Empate!\n");
        } else if (jogo[jogador][0] == computador || jogo[jogador][1] == computador) {
            printf("Jogador vence!\n");
            pontos_jogador = pontos_jogador + jogo[jogador][2];
        } else {
            printf("Computador vence!\n");
            pontos_computador = pontos_computador + jogo[computador][2];
        }
        
        i++;
        
    } while (i < 3);
    
    printf("%d, %d", pontos_jogador, pontos_computador);
    return 0;

}
