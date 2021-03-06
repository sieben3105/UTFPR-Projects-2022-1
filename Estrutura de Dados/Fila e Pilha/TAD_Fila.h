#ifndef FILA_TAD_H
#define FILA_TAD_H

/*------------------------------------------*/
/* tipos de dados                           */
/*------------------------------------------*/
/* descritor da fila */
typedef struct dFila  DFila;
typedef DFila*        pDFila;

/*------------------------------------------*/
/* operacoes                                */
/*------------------------------------------*/
pDFila   criarFila          ();
void     enfileirarInfo     (pDFila, void *);
void*    desenfileirarInfo  (pDFila);
int      filaVazia          (pDFila);

/*------------------------------------------*/
/* operacoes lista de exercicio
/*------------------------------------------*/

void     inverteFila        (pDFila);
pDFila   copiarFila         (pDFila, FuncaoAlocacao);
void     trocaFila          (pDFila, int, int);

/* Prova 1 */

pDLista NGE (pDFila, FuncaoComparacao);


#endif