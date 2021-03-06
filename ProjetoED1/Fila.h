#ifndef _Fila_H_
#define _Fila_H_

typedef struct fila
{
	Lista *ini,*fim;
}Fila;

/*Cria a fila*/
Fila* CriarFila();

/*Insere na fila*/
Fila * InserirFila(Fila *f);

/*Retira da fila*/
int RetiraFila(Fila *f);

/*Verifica se fica esta vazia*/
int VerFilaVazia(Fila *f);

/*Libera a fila*/
void LiberaFila(Fila *f);

/*Imprime a fila*/
void ImprimirFila(Fila *f);

#endif

