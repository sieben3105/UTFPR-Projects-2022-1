#include <stdio.h>
#include "../Utils.h"

#include "../Pilha.h"

int main(){
    pDPilha pPilhaInt = criarPilha();
    pDPilha pPilhaIntCopia = criarPilha();

    /* teste de empilhamento */
    empilharInfo(pPilhaInt, alocaInt(5));
    empilharInfo(pPilhaInt, alocaInt(3));
    empilharInfo(pPilhaInt, alocaInt(9));
    empilharInfo(pPilhaInt, alocaInt(1));
    empilharInfo(pPilhaInt, alocaInt(2));

    /* teste de desempilhamento */
    /*void *info = desempilharInfo(pPilhaInt);
    printf("\nDesempilhou o inteiro = %d \n", *((int*)info));

    while (pilhaVazia(pPilhaInt)==0){
        info = desempilharInfo(pPilhaInt);
        printf("\nDesempilhou o inteiro = %d \n", *((int*)info));
    }*/

    /*empilharInfo(pPilhaIntCopia, alocaInt(5));
    empilharInfo(pPilhaIntCopia, alocaInt(3));
    empilharInfo(pPilhaIntCopia, alocaInt(9));
    empilharInfo(pPilhaIntCopia, alocaInt(1));
    empilharInfo(pPilhaIntCopia, alocaInt(2));
    empilharInfo(pPilhaIntCopia, alocaInt(30));*/

    /*pPilhaIntCopia = copiarPilha(pPilhaInt, alocaInfoInt);

    printf("\nPilha Original\n");
    imprimirLista(pPilhaInt->pdLista, imprimeInt);
    printf("\nPilha Copia\n");
    imprimirLista(pPilhaIntCopia->pdLista, imprimeInt);

    if(pilhasIguais(pPilhaInt, pPilhaIntCopia, comparaInt) == 0){
        printf("\nPilhas Iguais!");
    }else{
        printf("\nPilhas Diferentes!");
    }

    char expressao[10]={'(','(','(','(',')',')','(', '(', ')'};

    int balanceado = balanceamento(expressao);

    if(balanceado==1){
        printf("\nBalanceado");
    }else{
        printf("\nDesbalanceado");
    }

    if(removeInfo(pPilhaIntCopia, alocaInt(1), comparaInt)){
        printf("\nRemover Info '1'\n");
        imprimirLista(pPilhaIntCopia->pdLista, imprimeInt);
    }else{
        printf("\nErro ao Remover Info");
    }

    

    printf("\nPilha Original\n");
    imprimirLista(pPilhaInt->pdLista, imprimeInt);
    

    limpaPilha(pPilhaInt, free);

    printf("\nPilha Original - Vazia\n");
    imprimirLista(pPilhaInt->pdLista, imprimeInt);
    printf("\nPilha Original - Tamanho %d", pPilhaInt->pdLista->quantidade);

    

    empilharInfo(pPilhaInt, alocaInt(5));
    empilharInfo(pPilhaInt, alocaInt(4));
    empilharInfo(pPilhaInt, alocaInt(9));
    empilharInfo(pPilhaInt, alocaInt(1));
    empilharInfo(pPilhaInt, alocaInt(8));

    printf("\nPilha Original\n");
    imprimirLista(pPilhaInt->pdLista, imprimeInt);
    printf("\nPilha Copia\n");
    imprimirLista(pPilhaIntCopia->pdLista, imprimeInt);

    pDPilha pInterseccao = criarPilha();
    pInterseccao = interseccao(pPilhaInt, pPilhaIntCopia, comparaInt);
    printf("\nPilha Interseccao\n");
    imprimirLista(pInterseccao->pdLista, imprimeInt);*/

    char exp[10]={'*','2','8','+','4','5'};

    int resultado = avalia(exp);
    //int resultado =2;

    printf("\nResultado = %d\n", resultado);


}
