#include <stdio.h>
#include <stdlib.h>

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