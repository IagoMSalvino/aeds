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
    
    int portaPremiada, portaVazia, portaEscolhida;
    char opcao;
    
    portaPremiada = rand() % 3 + 1;
    
    printf("Bem vindo ao jogo monty hall!\n");
    printf("Escolha uma porta (1, 2 ou 3): ");
    scanf("%d", &portaEscolhida);
     
    do {
        portaVazia = rand() % 3 + 1;
    } while (portaVazia == portaEscolhida || portaVazia == portaPremiada);
    
    printf("apresentador abre a porta %d que esta vazia .\n", portaVazia);
    printf("Você deseja trocar para a outra porta? (s/n): ");
    scanf(" %c", &opcao);
    
    if (opcao == 's' || opcao == 'S') {
        do {
            portaEscolhida = rand() % 3 + 1;
        } while (portaEscolhida == portaVazia || portaEscolhida == portaEscolhida);
    }
    
    if (portaEscolhida == portaPremiada) {
        printf("Parabens, o premio é seu!\n");
    } else {
        printf("PERDEU!!!. A porta premiada era a %d.\n", portaPremiada);
    }
    
    return 0;
}
