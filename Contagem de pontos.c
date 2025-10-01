#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define PEDRA 0
#define PAPEL 1 
#define TESOURA 2

int main(){

    int jogador, computador, pontos_jogador = 0, pontos_computador = 0, i = 0;
    char jogar_novamente;
    int jogador_ganha[3][3] = {{TESOURA, 2, 1}, {PEDRA, 1, 3}, {PAPEL, 3, 2}};
    
    do {
        printf("Escolha: 0 (Pedra), 1 (Papel), 2 (Tesoura): ");
        scanf("%d", &jogador);
        computador = rand() % 3; 
        printf("Computador escolheu: %d\n", computador);
        if (jogador == computador) {
            printf("Empate!\n");
        } else if (jogador_ganha[jogador][0] == computador) {
            printf("Jogador vence!\n");
            pontos_jogador = pontos_jogador + jogador_ganha[jogador][1];
        } else {
            printf("Computador vence!\n");
            pontos_computador = pontos_computador + jogador_ganha[jogador][2];
        }
        
        i++;
        
    } while (i < 3);
    
    printf("%d, %d", pontos_jogador, pontos_computador);
    return 0;
}
