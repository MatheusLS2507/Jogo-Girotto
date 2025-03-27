#include <stdio.h>
#include <stdlib.h>

int main() {
    int op;

    do {
        printf("\n[1] Pergunta e Resposta\n");
        printf("[2] Cobra na Caixa!\n");
        printf("[3] Gousmas War\n");
        printf("[4] Sair\n");
        printf("Selecione uma Alternativa: ");
        scanf("%d", &op);

        switch (op) {
            case 1: {
                int resp1, resp2, resp3, resp4, resp5, resp6, resp7, resp8;
                int opcao;

                do {
                    // PERGUNTA 1
                    printf("\n1- QUAL EH O MENOR E MAIOR PAIS DO MUNDO?\n");
                    printf("1) Vaticano e Russia\n");
                    printf("2) Nauru e China\n");
                    printf("3) Monaco e Estados Unidos\n");
                    printf("4) Sao Marino e India\n");
                    printf("Digite sua resposta: ");
                    scanf("%d", &resp1);
                    printf(resp1 == 1 ? "RESPOSTA CORRETA!!!\n" : "RESPOSTA ERRADA, A RESPOSTA CORRETA EH A 1\n");

                    // PERGUNTA 2
                    printf("\n2- QUAL EH A CAPITAL DO ACRE?\n");
                    printf("1) Rondonia\n");
                    printf("2) Macapa\n");
                    printf("3) Rio Branco\n");
                    printf("4) Altamira\n");
                    printf("Digite sua resposta: ");
                    scanf("%d", &resp2);
                    printf(resp2 == 3 ? "RESPOSTA CORRETA!!!\n" : "RESPOSTA ERRADA, A RESPOSTA CORRETA EH A 3\n");

                    // PERGUNTA 3
                    printf("\n3- QUAL DESSES PAISES NAO EH EUROPEU?\n");
                    printf("1) Macedonia\n");
                    printf("2) Espanha\n");
                    printf("3) Grecia\n");
                    printf("4) Casaquistao\n");
                    printf("Digite sua resposta: ");
                    scanf("%d", &resp3);
                    printf(resp3 == 4 ? "RESPOSTA CORRETA!!!\n" : "RESPOSTA ERRADA, A RESPOSTA CORRETA EH A 4\n");

                    // PERGUNTA 4
                    printf("\n4- O BRASIL EH DE QUE CONTINENTE?\n");
                    printf("1) America do Norte\n");
                    printf("2) America do Sul\n");
                    printf("3) America Central\n");
                    printf("4) Europa\n");
                    printf("Digite sua resposta: ");
                    scanf("%d", &resp4);
                    printf(resp4 == 2 ? "RESPOSTA CORRETA!!!\n" : "RESPOSTA ERRADA, A RESPOSTA CORRETA EH A 2\n");

                    // PERGUNTA 5
                    printf("\n5- QUAL DESSES NAO EH UMA ILHA?\n");
                    printf("1) Madagascar\n");
                    printf("2) Libia\n");
                    printf("3) Indonesia\n");
                    printf("4) Barbados\n");
                    printf("Digite sua resposta: ");
                    scanf("%d", &resp5);
                    printf(resp5 == 2 ? "RESPOSTA CORRETA!!!\n" : "RESPOSTA ERRADA, A RESPOSTA CORRETA EH A 2\n");

                    // PERGUNTA 6
                    printf("\n6- QUAL A CAPITAL DA GUATEMALA?\n");
                    printf("1) Porto Principe\n");
                    printf("2) Cidade da Guatemala\n");
                    printf("3) La Paz\n");
                    printf("4) Guatemala\n");
                    printf("Digite sua resposta: ");
                    scanf("%d", &resp6);
                    printf(resp6 == 2 ? "RESPOSTA CORRETA!!!\n" : "RESPOSTA ERRADA, A RESPOSTA CORRETA EH A 2\n");

                    // PERGUNTA 7
                    printf("\n7- QUAL DESSES NAO EH AFRICANO?\n");
                    printf("1) Egito\n");
                    printf("2) Madagascar\n");
                    printf("3) Arabia Saudita\n");
                    printf("4) Ruanda\n");
                    printf("Digite sua resposta: ");
                    scanf("%d", &resp7);
                    printf(resp7 == 3 ? "RESPOSTA CORRETA!!!\n" : "RESPOSTA ERRADA, A RESPOSTA CORRETA EH A 3\n");

                    // PERGUNTA 8
                    printf("\n8- QUAL A CAPITAL DO MEXICO?\n");
                    printf("1) Cidade do Mexico\n");
                    printf("2) Del Mexico\n");
                    printf("3) Mexicali\n");
                    printf("4) Tihuana\n");
                    printf("Digite sua resposta: ");
                    scanf("%d", &resp8);
                    printf(resp8 == 1 ? "RESPOSTA CORRETA!!!\n" : "RESPOSTA ERRADA, A RESPOSTA CORRETA EH A 1\n");

                    // Menu de reiniciar/sair
                    printf("\nFim do jogo!\n");
                    printf("1. Reiniciar\n");
                    printf("2. Sair\n");
                    printf("Escolha uma opcao: ");
                    scanf("%d", &opcao);

                } while (opcao == 1);
                break;
            }

            case 2:
                  // Cobra na Caixa!
       {
            srand(time(NULL));
            char *nomes[] = {"Alice", "Bruno", "Carlos", "Diana", "Eduardo", "Fernanda", "Gustavo"};
            int jogador1, jogador2, jogadorAtual;
            int cobra, botao, escolha;

            printf("\nEscolha dois jogadores da lista:\n");
            int i; 
            for (i = 0; i < 7; i++) {
                printf("%d. %s\n", i + 1, nomes[i]);
            }
            
            printf("Jogador 1: ");
            scanf("%d", &jogador1);
            printf("Jogador 2: ");
            scanf("%d", &jogador2);
            
            jogador1--; jogador2--; 
            jogadorAtual = rand() % 2 ? jogador1 : jogador2;
            printf("\n%s comeca o jogo!\n", nomes[jogadorAtual]);
            
            while (1) {
                cobra = rand() % 5 + 1;
                botao = rand() % 5 + 1;
                while (botao == cobra) {
                    botao = rand() % 5 + 1;
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
        break;

            case 3:
               {
                int furiaJogador1_1 = 1, furiaJogador1_2 = 1, numGousmasJogador1 = 2;
                int furiaJogador2_1 = 1, furiaJogador2_2 = 1, numGousmasJogador2 = 2;
                int turno = 1, opcao, gousmaAtacante, gousmaDefensor, furiaTransferida;

                while (1) {
                    printf("\nTurno %d\n", turno);

                    // Mostra o status dos jogadores
                    printf("Jogador 1:\n");
                    if (furiaJogador1_1 > 0) printf("  Gousma 1: Furia %d\n", furiaJogador1_1);
                    else printf("  Gousma 1: Desintegrada\n");
                    if (furiaJogador1_2 > 0) printf("  Gousma 2: Furia %d\n", furiaJogador1_2);
                    else printf("  Gousma 2: Desintegrada\n");

                    printf("Jogador 2:\n");
                    if (furiaJogador2_1 > 0) printf("  Gousma 1: Furia %d\n", furiaJogador2_1);
                    else printf("  Gousma 1: Desintegrada\n");
                    if (furiaJogador2_2 > 0) printf("  Gousma 2: Furia %d\n", furiaJogador2_2);
                    else printf("  Gousma 2: Desintegrada\n");

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
                        }
                        // Continue com a lógica similar para outras combinações de ataque...

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
                        }
                        // Continue com a lógica para outras transferências...

                    }

                    // Verifica se o Jogador 2 perdeu após o turno do Jogador 1
                    if ((furiaJogador2_1 <= 0 && furiaJogador2_2 <= 0) || numGousmasJogador2 == 0) {
                        printf("Jogador 1 venceu!\n");
                        break;
                    }

                    // Turno do Jogador 2
                    // Repita as mesmas opções de ataque e divisão de fúria para o Jogador 2

                    turno++;
                }
            }
            break;

            case 4:
                printf("Saindo do menu...\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
		}
    } while (op != 4);

    return 0;
}

