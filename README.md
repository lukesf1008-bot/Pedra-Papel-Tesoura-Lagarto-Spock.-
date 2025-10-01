# Pedra-Papel-Tesoura-Lagarto-Spock-

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define PEDRA 0
#define PAPEL 1 
#define TESOURA 2
#define LAGARTO 3
#define SPOCK 4

int main(){
    
    int jogador, computador;
    char jogar_novamente;
    
    do {
        printf("Escolha: 0 (Pedra), 1 (Papel), 2 (Tesoura), 3 (Lagarto), 4 (Spock): ");
        scanf("%d", &jogador);
        
        computador = rand() % 5; 
        
        printf("Computador escolheu: %d\n", computador);
    
        if (jogador == computador) {
            printf("Empate!\n");
        } else if ((jogador == PEDRA && (computador == TESOURA || computador == LAGARTO)) ||
                   (jogador == PAPEL && (computador == PEDRA || computador == SPOCK)) ||
                   (jogador == TESOURA && (computador == PAPEL || computador == LAGARTO)) ||
                   (jogador == LAGARTO && (computador == PAPEL || computador == SPOCK)) ||
                   (jogador == SPOCK && (computador == TESOURA || computador == PEDRA))) {
            printf("Jogador vence!\n");
        } else {
            printf("Computador vence!\n");
        }
        
        printf("Quer jogar novamente? (s/n): ");
        scanf(" %c", &jogar_novamente);
        
    } while (jogar_novamente == 's' || jogar_novamente == 'S');
    
    return 0;
}
