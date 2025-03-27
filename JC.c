#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//JOGO 1
void JogarPerguntasERespostas();

int main() {
    int resp1, resp2, resp3, resp4, resp5, resp6, resp7, resp8;
    int opcao;
    int reiniciar;
do{
    inicio:
    //PERGUNTA 1
    printf("1- QUAL EH O MENOR E MAIOR PAIS DO MUNDO?\n");
    printf("1)Vaticano e Russia\n");
    printf("2)Nauru e China\n");
    printf("3)Monaco e Estados Unidos\n");
    printf("4)Sao Marino e India\n");
    printf("Digite sua resposta: ");
    scanf("%d", &resp1);
    if(resp1==1){
        printf("RESPOSTA CORRETA!!!\n");
    }else{
        printf("RESPOSTA ERRADA, A RESPOSTA CORRETA EH A 1\n");
    }
    
    //PERGUNTA 2
    printf("2- QUAL EH A CAPITAL DO ACRE?\n");
    printf("1)Rondonia\n");
    printf("2)Macapa\n");
    printf("3)Rio Branco\n");
    printf("4)Altamira\n");
    printf("Digite sua resposta: ");
    scanf("%d", &resp2);
    if(resp2==3){
        printf("RESPOSTA CORRETA!!!\n");
    }else{
        printf("RESPOSTA ERRADA, A RESPOSTA CORRETA EH A 3\n");
    }
    
    //PERGUNTA 3
    printf("3- QUAL DESSES PAISES NAO EH EUROPEU?\n");
    printf("1)Macedonia\n");
    printf("2)Espanha\n");
    printf("3)Grecia\n");
    printf("4)Casaquistao\n");
    printf("Digite sua resposta: ");
    scanf("%d", &resp3);
    if(resp3==4){
        printf("RESPOSTA CORRETA!!!\n");
    }else{
        printf("RESPOSTA ERRADA, A RESPOSTA CORRETA EH A 4\n");
    }
    
    //PERGUNTA 4
    printf("4- O BRASIL EH DE QUE CONTINENTE?\n");
    printf("1)America do norte\n");
    printf("2)America do sul\n");
    printf("3)America central\n");
    printf("4)Europa\n");
    printf("Digite sua resposta: ");
    scanf("%d", &resp4);
    if(resp4==2){
        printf("RESPOSTA CORRETA!!!\n");
    }else{
        printf("RESPOSTA ERRADA, A RESPOSTA CORRETA EH A 2\n");
    }
    
    //PERGUNTA 5
    printf("5- QUAL DESSES NAO EH UMA ILHA?\n");
    printf("1)Madagasgar\n");
    printf("2)Libia\n");
    printf("3)Indonesia\n");
    printf("4)Barbados\n");
    printf("Digite sua resposta: ");
    scanf("%d", &resp5);
    if(resp5==2){
        printf("RESPOSTA CORRETA!!!\n");
    }else{
        printf("RESPOSTA ERRADA, A RESPOSTA CORRETA EH A 2\n");
    }
    
    //PERGUNTA 6
    printf("6- QUAL A CAPITAL DA GUATEMALA?\n");
    printf("1)Porto Pricipe\n");
    printf("2)Cidade da Guatemala\n");
    printf("3)La Paz\n");
    printf("4)Guatemala\n");
    printf("Digite sua resposta: ");
    scanf("%d", &resp6);
    if(resp6==4){
        printf("RESPOSTA CORRETA!!!\n");
    }else{
        printf("RESPOSTA ERRADA, A RESPOSTA CORRETA EH A 4\n");
    }
    
    //PERGUNTA 7
    printf("7- QUAL DESSES NAO EH AFRICANO?\n");
    printf("1)Egito\n");
    printf("2)Madagascar\n");
    printf("3)Arabia Saudita\n");
    printf("4)Ruanda\n");
    printf("Digite sua resposta: ");
    scanf("%d", &resp7);
    if(resp7==3){
        printf("RESPOSTA CORRETA!!!\n");
    }else{
        printf("RESPOSTA ERRADA, A RESPOSTA CORRETA EH A 3\n");
    }
    
    //PERGUNTA 8
    printf("8- QUAL A CAPITAL DO MEXICO?\n");
    printf("1)Cidade do Mexico\n");
    printf("2)Del Mexico\n");
    printf("3)Mexicali\n");
    printf("4)Tihuana\n");
    printf("Digite sua resposta: ");
    scanf("%d", &resp8);
    if(resp8==1){
        printf("RESPOSTA CORRETA!!!\n");
    }else{
        printf("RESPOSTA ERRADA, A RESPOSTA CORRETA EH A 1\n");
    }
    
    // Menu de reiniciar/sair
    printf("\nFim do jogo!\n");
    printf("1. Reiniciar\n");
    printf("2. Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &reiniciar);
    

}while(reiniciar == 1);
    return 0;
}

//JOGO 2
// Protótipos das funções
void jogarCobraNaCaixa();
int sortearNumero(int min, int max);

int main() {
    int reiniciar;
    
    do {
        jogarCobraNaCaixa(); // Correta chamada da função

        // Menu de reiniciar/sair
        printf("\nFim do jogo!\n");
        printf("1. Reiniciar\n");
        printf("2. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &reiniciar);
        
    } while (reiniciar == 1);
    
    return 0;
}

// Definição da função jogarCobraNaCaixa()
void jogarCobraNaCaixa() {
    srand(time(NULL)); // Inicializa a semente do gerador de números aleatórios
    
    char *nomes[] = {"Alice", "Bruno", "Carlos", "Diana", "Eduardo", "Fernanda", "Gustavo"};
    int jogador1, jogador2, jogadorAtual;
    int cobra, botao, escolha;
    
    printf("\nEscolha dois jogadores da lista:\n");
    for (int i = 0; i < 7; i++) {
        printf("%d. %s\n", i + 1, nomes[i]);
    }
    
    printf("Jogador 1: ");
    scanf("%d", &jogador1);
    printf("Jogador 2: ");
    scanf("%d", &jogador2);
    
    jogador1--; jogador2--; // Ajustar para índice do array
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

// Definição da função sortearNumero()
int sortearNumero(int min, int max) {
    return min + rand() % (max - min + 1);
}

//JOGO 3
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

//MENU DO JOGO
int main()
{
	int op;
    printf("[1] Pergunta e Resposta\n");
    printf("[2] Cobra na Caixa!\n");
    printf("[3] Gousmas War\n");
    printf("[4] Sair\n");
    printf("Selecione uma Alternativa: ");
    scanf("%d", &op);
    
    switch(op){
       case 1:
       //Jogo 1
       JogarPerguntasERespostas();
   
       case 2:
       //Jogo 2
       jogarCobraNaCaixa();
 
       case 3:
       //Jogo 3
       JogarGousmasWar();
       
       case 4:
	   //Sair do Menu
	   printf("Encerrando Sessao");
	   break; 
		
	}
    
    return 0;
}