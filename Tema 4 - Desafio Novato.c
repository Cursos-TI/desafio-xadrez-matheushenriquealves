#include <stdio.h>

// Invés de colocar as movimentações pré progamadas eu fiz o código para ser interativo
int main(){

    printf("## Bem vindo ao Jogo de Xadrez, neste jogo teremos 3 peças para podermos movimentar, a Torre, o Bispo e a Rainha ");
    printf("se movimentando\n em linha reta horizontalmente ou verticalmente, na diagonal e em todas as direções respectivamente.##\n");

    int vezes;
    int controlador = 1;
    char escolha;

    // Menu de escolha das peças
    printf("Você deve escolher qual peça irá movimentar e qual a quantidade de vezes que ela irá se movimentar\n");
    printf("T. Torre\n");
    printf("B. Bispo\n");
    printf("R. Rainha\n");

    // Usuário escolhe a peça
    printf("Digite a letra correspondente a peça que deseja escolher: ");
    scanf(" %c", &escolha); // espaço para ignorar enter

    // Usuário informa quantas vezes quer movimentar
    printf("Digite quantidade de vezes que você quer que a peça seja movimentada: ");
    scanf("%d", &vezes);

    if(escolha == 'T' || escolha == 't'){
        // Torre: movimentação com while
        char direcao;
        printf("Você movimentará a Torre!\n");
        printf("Escolha a direção (D para direita, E para esquerda, C para cima, B para baixo): ");
        scanf(" %c", &direcao);

        while(controlador <= vezes){
            printf("Torre se movimentará %d vez(es) para ", controlador);
            switch(direcao){
                case 'D': case 'd': printf("direita\n"); break;
                case 'E': case 'e': printf("esquerda\n"); break;
                case 'C': case 'c': printf("cima\n"); break;
                case 'B': case 'b': printf("baixo\n"); break;
                default: printf("uma direção inválida\n"); break;
            }
            controlador++;
        }
    } else if(escolha == 'B' || escolha == 'b'){
        // Bispo: movimentação com for e apenas diagonais
        int op_diag;
        printf("Você movimentará o Bispo!\n");
        printf("Escolha a direção diagonal:\n");
        printf("1. Cima Direita\n");
        printf("2. Cima Esquerda\n");
        printf("3. Baixo Direita\n");
        printf("4. Baixo Esquerda\n");
        scanf("%d", &op_diag);

        for(int i = 1; i <= vezes; i++){
            printf("Bispo se movimentará %d vez(es) para ", i);
            switch(op_diag){
                case 1: printf("diagonal cima direita\n"); break;
                case 2: printf("diagonal cima esquerda\n"); break;
                case 3: printf("diagonal baixo direita\n"); break;
                case 4: printf("diagonal baixo esquerda\n"); break;
                default: printf("uma direção inválida\n"); break;
            }
        }
    } else if(escolha == 'R' || escolha == 'r'){
        // Rainha: movimentação com do...while
        char direcao;
        int i = 1;
        printf("Você movimentará a Rainha!\n");
        printf("Escolha a direção (D para direita, E para esquerda, C para cima, B para baixo): ");
        scanf(" %c", &direcao);

        do{
            printf("Rainha se movimentará %d vez(es) para ", i);
            switch(direcao){
                case 'D': case 'd': printf("direita\n"); break;
                case 'E': case 'e': printf("esquerda\n"); break;
                case 'C': case 'c': printf("cima\n"); break;
                case 'B': case 'b': printf("baixo\n"); break;
                default: printf("uma direção inválida\n"); break;
            }
            i++;
        } while(i <= vezes);
    } else {
        printf("Opção inválida.\n");
    }

    return 0;
}
