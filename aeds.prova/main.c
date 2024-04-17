//nome:Iago Magno Salvino
//apresentacao
//escolha das portas 
//mostrar a porta errada 
//escolher se mantem a mesma porta ou troca 
//mostrar se ganhou ou perdeu

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); 
    
    int Premiada, Vazia, Escolhida;
    char opcao;
    
    Premiada = rand() % 3 + 1;
    
    printf("Bem vindo ao jogo monty hall!\n");
    printf("Escolha uma porta (1, 2 ou 3): ");
    scanf("%d", &Escolhida);
     
    do {
        Vazia = rand() % 3 + 1;
    } while (Vazia == Escolhida || Vazia == Premiada);
    
    printf("apresentador abre a porta %d que esta vazia .\n", Vazia);
    printf("Você deseja trocar para a outra porta? (s/n): ");
    scanf(" %c", &opcao);
    
    if (opcao == 's' || opcao == 'S') {
        do {
            Escolhida = rand() % 3 + 1;
        } while (Escolhida == Vazia || Escolhida == Escolhida);
    }
    
    if (Escolhida == Premiada) {
        printf("Parabens, voce ganhou!\n");
    } else {
        printf("PERDEU!!!. A porta premiada era a %d.\n", Premiada);
    }
    
    return 0;
}
