#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#include "Grafo.h"
#include "Utils.h"

/* ----------------------------- */
void main(){

    //int vertices[] = {1,2,3,4,5};
    int vertices[] = {0,1,2,3,4,5,6};

    int opcao, vOrigem, vDestino, vertice;
    int *pv;

    pDGrafo grafo = criarGrafoPlus(comparaVertice, imprimeVertice, alocaInfoVertice);

    do{
        printf("\n0  - Criar grafo \n");
        printf("  1  - Incluir Vertice \n");
        printf("  2  - Incluir Aresta \n");
        printf("  3  - Excluir Vertice \n");
        printf("  4  - Excluir Aresta \n");
        printf("  5  - Mostrar grafo \n");
        printf("  6  - Busca em profundidade \n");
        printf("  7  - Busca em amplitude \n");
        printf("  8  - Existe caminho (entre dois vertices) \n");
        printf("  9  - Encontra caminho (entre dois vertices) \n");
        printf("10 - Sair \n");

        scanf ("%d", &opcao);

        switch (opcao){

         case 0 :
            incluirVertice(grafo, &vertices[0], NULL);
            incluirVertice(grafo, &vertices[1], NULL);
            incluirVertice(grafo, &vertices[2], NULL);
            incluirVertice(grafo, &vertices[3], NULL);
            incluirVertice(grafo, &vertices[4], NULL);

            incluirAresta(grafo, &vertices[0], &vertices[1], NULL);
            incluirAresta(grafo, &vertices[1], &vertices[3], NULL);
            incluirAresta(grafo, &vertices[2], &vertices[3], NULL);
            incluirAresta(grafo, &vertices[2], &vertices[4], NULL);
            incluirAresta(grafo, &vertices[3], &vertices[4], NULL);
            incluirAresta(grafo, &vertices[4], &vertices[1], NULL);

            //TODO exemplo diferente de grafo
            /*incluirVertice(grafo, &vertices[0], NULL);
            incluirVertice(grafo, &vertices[1], NULL);
            incluirVertice(grafo, &vertices[2], NULL);
            incluirVertice(grafo, &vertices[3], NULL);
            incluirVertice(grafo, &vertices[4], NULL);
            incluirVertice(grafo, &vertices[5], NULL);
            incluirVertice(grafo, &vertices[6], NULL);

            incluirAresta(grafo, &vertices[0], &vertices[1], NULL);
            incluirAresta(grafo, &vertices[0], &vertices[2], NULL);
            incluirAresta(grafo, &vertices[0], &vertices[3], NULL);
            incluirAresta(grafo, &vertices[0], &vertices[4], NULL);
            incluirAresta(grafo, &vertices[3], &vertices[5], NULL);
            incluirAresta(grafo, &vertices[1], &vertices[6], NULL);*/


            mostrarGrafo(grafo, NULL);
            getch();
            break;

        case 1 :

            pv = (int *)malloc(sizeof(int));
            printf ("ID do vertice : ");
            scanf("%d", pv);
            incluirVertice(grafo, pv, NULL);

            mostrarGrafo(grafo, NULL);
            getch();
            break;

        case 2 :

            printf ("\nID do vertice origem : ");
            scanf("%d", &vOrigem);
            printf ("\nID do vertice destino : ");
            scanf("%d", &vDestino);
            incluirAresta(grafo, &vOrigem, &vDestino, NULL);

            mostrarGrafo(grafo,NULL);
            getch();
            break;
        case 3:
            printf ("\nID do vertice : ");
            scanf("%d", &vertice);

            excluirVertice(grafo, &vertice, comparaInt);
            
            mostrarGrafo(grafo, NULL);
            getch();
            break;
        case 4:
            printf ("\nID do vertice origem : ");
            scanf("%d", &vOrigem);
            printf ("\nID do vertice destino : ");
            scanf("%d", &vDestino);

            excluirAresta(grafo, &vOrigem, &vDestino, comparaInt);

            mostrarGrafo(grafo, NULL);
            getch();
            break;

        case 5 :
            mostrarGrafo(grafo, NULL);
            getch();
            break;

        case 6 :
            buscaEmProfundidade(grafo, NULL, imprimeVerticeSemAdjacencias);
            getch();
            break;
        case 7:
            buscaAmplitude(grafo, NULL, imprimeVerticeSemAdjacencias);

            getch();
            break;

        case 8 :
            printf ("\nID do vertice origem : ");
            scanf("%d", &vOrigem);
            printf ("\nID do vertice destino : ");
            scanf("%d", &vDestino);

            int result = existeCaminho(grafo, &vOrigem, &vDestino);
            // existe um caminho
            if (result != 0)
                printf("Existe caminho!");
            else
                printf("Nao existe caminho!");

            getch();
            break;
        case 9 :
            printf ("\nID do vertice origem : ");
            scanf("%d", &vOrigem);
            printf ("\nID do vertice destino : ");
            scanf("%d", &vDestino);

            pDLista caminho = getCaminho(grafo, &vOrigem, &vDestino);
            if (caminho->quantidade > 0){
                printf("\n Existe um caminho: ");
                imprimirLista(caminho, imprimeVerticeSemAdjacencias);
            }
            else
                printf("\n *** NAO existe um caminho. *** ");

            getch();
            break;

        }

    }while (opcao != 10);

}
