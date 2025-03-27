#include <stdio.h>
#include <stdlib.h>

void JogarGousmasWar();

int main() {
	
    int reiniciar;
	  
    do{
    // Variáveis para o Jogador 1
    int furiaJogador1_1 = 1; // Fúria da Gousma 1 do Jogador 1
    int furiaJogador1_2 = 1; // Fúria da Gousma 2 do Jogador 1
    int numGousmasJogador1 = 2; // Número de Gousmas do Jogador 1

    // Variáveis para o Jogador 2
    int furiaJogador2_1 = 1; // Fúria da Gousma 1 do Jogador 2
    int furiaJogador2_2 = 1; // Fúria da Gousma 2 do Jogador 2
    int numGousmasJogador2 = 2; // Número de Gousmas do Jogador 2

    int turno = 1;
    int opcao, gousmaAtacante, gousmaDefensor, furiaTransferida;

    while (1) {
        printf("\nTurno %d\n", turno);

        // Mostra o status do Jogador 1
        printf("Jogador 1:\n");
        if (furiaJogador1_1 > 0) printf("  Gousma 1: Furia %d\n", furiaJogador1_1);
        else printf("  Gousma 1: Desintegrada\n");
        if (furiaJogador1_2 > 0) printf("  Gousma 2: Furia %d\n", furiaJogador1_2);
        else printf("  Gousma 2: Desintegrada\n");

        // Mostra o status do Jogador 2
        printf("Jogador 2:\n");
        if (furiaJogador2_1 > 0) printf("  Gousma 1: Furia %d\n", furiaJogador2_1);
        else printf("  Gousma 1: Desintegrada\n");
        if (furiaJogador2_2 > 0) printf("  Gousma 2: Furia %d\n", furiaJogador2_2);
        else printf("  Gousma 2: Desintegrada\n");

        // Verifica se algum jogador perdeu
        if ((furiaJogador1_1 <= 0 && furiaJogador1_2 <= 0) || numGousmasJogador1 == 0) {
            printf("Jogador 2 venceu!\n");
            break;
        }
        if ((furiaJogador2_1 <= 0 && furiaJogador2_2 <= 0) || numGousmasJogador2 == 0) {
            printf("Jogador 1 venceu!\n");
            break;
        }

        // Turno do Jogador 1
        printf("Jogador 1, escolha uma opcao:\n");
        printf("1. Atacar\n");
        printf("2. Dividir Furia\n");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Escolha a Gousma atacante (1 ou 2): ");
            scanf("%d", &gousmaAtacante);
            printf("Escolha a Gousma defensor (1 ou 2): ");
            scanf("%d", &gousmaDefensor);

            if (gousmaAtacante == 1 && furiaJogador1_1 > 0 && gousmaDefensor == 1 && furiaJogador2_1 > 0) {
                furiaJogador2_1 += furiaJogador1_1;
                if (furiaJogador2_1 > 5) {
                    printf("Gousma do Jogador 2 se desintegrou!\n");
                    furiaJogador2_1 = 0;
                    numGousmasJogador2--;
                }
            } else if (gousmaAtacante == 1 && furiaJogador1_1 > 0 && gousmaDefensor == 2 && furiaJogador2_2 > 0) {
                furiaJogador2_2 += furiaJogador1_1;
                if (furiaJogador2_2 > 5) {
                    printf("Gousma do Jogador 2 se desintegrou!\n");
                    furiaJogador2_2 = 0;
                    numGousmasJogador2--;
                }
            } else if (gousmaAtacante == 2 && furiaJogador1_2 > 0 && gousmaDefensor == 1 && furiaJogador2_1 > 0) {
                furiaJogador2_1 += furiaJogador1_2;
                if (furiaJogador2_1 > 5) {
                    printf("Gousma do Jogador 2 se desintegrou!\n");
                    furiaJogador2_1 = 0;
                    numGousmasJogador2--;
                }
            } else if (gousmaAtacante == 2 && furiaJogador1_2 > 0 && gousmaDefensor == 2 && furiaJogador2_2 > 0) {
                furiaJogador2_2 += furiaJogador1_2;
                if (furiaJogador2_2 > 5) {
                    printf("Gousma do Jogador 2 se desintegrou!\n");
                    furiaJogador2_2 = 0;
                    numGousmasJogador2--;
                }
            } else {
                printf("Movimento invalido!\n");
            }
        } else if (opcao == 2) {
            printf("Escolha a Gousma de origem (1 ou 2): ");
            scanf("%d", &gousmaAtacante);
            printf("Escolha a quantidade de furia para transferir: ");
            scanf("%d", &furiaTransferida);

            if (gousmaAtacante == 1 && furiaJogador1_1 >= furiaTransferida && furiaJogador1_1 > 0) {
                if (furiaJogador1_2 > 0) { // Verifica se a Gousma 2 está ativa
                    furiaJogador1_1 -= furiaTransferida;
                    furiaJogador1_2 += furiaTransferida;
                    printf("Furia transferida com sucesso!\n");
                } else {
                    printf("Nao ha Gousma disponivel para transferencia!\n");
                }
            } else if (gousmaAtacante == 2 && furiaJogador1_2 >= furiaTransferida && furiaJogador1_2 > 0) {
                if (furiaJogador1_1 > 0) { // Verifica se a Gousma 1 está ativa
                    furiaJogador1_2 -= furiaTransferida;
                    furiaJogador1_1 += furiaTransferida;
                    printf("Furia transferida com sucesso!\n");
                } else {
                    printf("Nao ha Gousma disponivel para transferencia!\n");
                }
            } else {
                printf("Furia insuficiente ou Gousma inativa!\n");
            }
        }

        // Verifica se o Jogador 2 perdeu após o turno do Jogador 1
        if ((furiaJogador2_1 <= 0 && furiaJogador2_2 <= 0) || numGousmasJogador2 == 0) {
            printf("Jogador 1 venceu!\n");
            break;
        }

        // Turno do Jogador 2
        printf("Jogador 2, escolha uma opcao:\n");
        printf("1. Atacar\n");
        printf("2. Dividir Furia\n");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Escolha a Gousma atacante (1 ou 2): ");
            scanf("%d", &gousmaAtacante);
            printf("Escolha a Gousma defensor (1 ou 2): ");
            scanf("%d", &gousmaDefensor);

            if (gousmaAtacante == 1 && furiaJogador2_1 > 0 && gousmaDefensor == 1 && furiaJogador1_1 > 0) {
                furiaJogador1_1 += furiaJogador2_1;
                if (furiaJogador1_1 > 5) {
                    printf("Gousma do Jogador 1 se desintegrou!\n");
                    furiaJogador1_1 = 0;
                    numGousmasJogador1--;
                }
            } else if (gousmaAtacante == 1 && furiaJogador2_1 > 0 && gousmaDefensor == 2 && furiaJogador1_2 > 0) {
                furiaJogador1_2 += furiaJogador2_1;
                if (furiaJogador1_2 > 5) {
                    printf("Gousma do Jogador 1 se desintegrou!\n");
                    furiaJogador1_2 = 0;
                    numGousmasJogador1--;
                }
            } else if (gousmaAtacante == 2 && furiaJogador2_2 > 0 && gousmaDefensor == 1 && furiaJogador1_1 > 0) {
                furiaJogador1_1 += furiaJogador2_2;
                if (furiaJogador1_1 > 5) {
                    printf("Gousma do Jogador 1 se desintegrou!\n");
                    furiaJogador1_1 = 0;
                    numGousmasJogador1--;
                }
            } else if (gousmaAtacante == 2 && furiaJogador2_2 > 0 && gousmaDefensor == 2 && furiaJogador1_2 > 0) {
                furiaJogador1_2 += furiaJogador2_2;
                if (furiaJogador1_2 > 5) {
                    printf("Gousma do Jogador 1 se desintegrou!\n");
                    furiaJogador1_2 = 0;
                    numGousmasJogador1--;
                }
            } else {
                printf("Movimento invalido!\n");
            }
        } else if (opcao == 2) {
            printf("Escolha a Gousma de origem (1 ou 2): ");
            scanf("%d", &gousmaAtacante);
            printf("Escolha a quantidade de furia para transferir: ");
            scanf("%d", &furiaTransferida);

            if (gousmaAtacante == 1 && furiaJogador2_1 >= furiaTransferida && furiaJogador2_1 > 0) {
                if (furiaJogador2_2 > 0) { // Verifica se a Gousma 2 está ativa
                    furiaJogador2_1 -= furiaTransferida;
                    furiaJogador2_2 += furiaTransferida;
                    printf("Furia transferida com sucesso!\n");
                } else {
                    printf("Nao ha Gousma disponivel para transferencia!\n");
                }
            } else if (gousmaAtacante == 2 && furiaJogador2_2 >= furiaTransferida && furiaJogador2_2 > 0) {
                if (furiaJogador2_1 > 0) { // Verifica se a Gousma 1 está ativa
                    furiaJogador2_2 -= furiaTransferida;
                    furiaJogador2_1 += furiaTransferida;
                    printf("Furia transferida com sucesso!\n");
                } else {
                    printf("Nao ha Gousma disponivel para transferencia!\n");
                }
            } else {
                printf("Furia insuficiente ou Gousma inativa!\n");
            }
        }

        turno++;
    }

    // Fim do jogo
    // Menu de reiniciar/sair
    printf("\nFim do jogo!\n");
    printf("1. Reiniciar\n");
    printf("2. Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &reiniciar);
    

	}while(reiniciar == 1);


    return 0;
}