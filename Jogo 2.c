#include <stdio.h>
#include <stdlib.h>


void jogarCobraNaCaixa();
int sortearNumero(int min, int max);

int main() {
    int opcao;
    do {
        printf("\n=== COBRA NA CAIXA ===\n");
        printf("1. Jogar\n");
        printf("2. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        
        if (opcao == 1) {
            jogarCobraNaCaixa();
        }
    } while (opcao != 2);
    
    printf("Obrigado por jogar!\n");
    return 0;
}

	void jogarCobraNaCaixa() {
    srand(time(NULL));
    char *nomes[] = {"Alice", "Bruno", "Carlos", "Diana", "Eduardo", "Fernanda", "Gustavo"};
    int jogador1, jogador2, jogadorAtual;
    int cobra, botao, escolha;
    
    printf("\nEscolha dois jogadores da lista:\n");
    int i; 
	for (i = 0; i < 7; i++){
        printf("%d. %s\n", i + 1, nomes[i]);
    }
    
    printf("Jogador 1: ");
    scanf("%d", &jogador1);
    printf("Jogador 2: ");
    scanf("%d", &jogador2);
    
    jogador1--; jogador2--; 
    jogadorAtual = sortearNumero(0, 1) ? jogador1 : jogador2;
    printf("\n%s comeca o jogo!\n", nomes[jogadorAtual]);
    
    while (1) {
        cobra = sortearNumero(1, 5);
        botao = sortearNumero(1, 5);
        while (botao == cobra) {
            botao = sortearNumero(1, 5);
        }
        
        printf("\n%s, escolha uma caixa (1-5): ", nomes[jogadorAtual]);
        scanf("%d", &escolha);
        
        if (escolha == cobra) {
            printf("\n%s encontrou a cobra! Fim de jogo.\n", nomes[jogadorAtual]);
            break;
        } else if (escolha == botao) {
            printf("\n%s encontrou o botao! Parabens, voce venceu!\n", nomes[jogadorAtual]);
            break;
        } else {
            printf("\nA caixa estava vazia! O jogo continua...\n");
            jogadorAtual = (jogadorAtual == jogador1) ? jogador2 : jogador1;
        }
    }
}

int sortearNumero(int min, int max) {
    return min + rand() % (max - min + 1);
}
