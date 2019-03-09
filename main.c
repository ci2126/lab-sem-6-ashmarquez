#include <stdio.h>
#include <stdlib.h>

/* Tarea N�1 Clonar */

Lista clonar (const Lista L){
    Lista M=newLista();
    Nodoc* p=L->alpha;
    while(p != NULL){
        addCab(p->key,M);
        p=p->sig;
    }
    return M;
}

/* Tarea N�2 Tama�o de una lista */

int size (const Lista L){
    int k=0;
    Nodo*p=L->alpha;
    while (p){
        k++;
        p=p->sig;
    }
    return k;
}

/* Tarea N�3 Mezcla de listas */

Lista merge (const Lista L, const Lista M){
    Nodoc *p=L->alpha;
    Nodoc *q=M->alpha;
    Lista N=newLista();
    while (p != NULL && q != NULL){
        if (strcmp(p->key, q->key) <= 0){
            addCol(p->key);
            p=p->sig;
        }
        else {
            addCol (q->key N);
            q=q->sig;
        }
    }
    while ( p != NULL){
        addCol(p->key,N);
        p=p->sig;
    }
    while ( q != NULL ){
        addCol(q->key, N);
        q=q->sig;
    }
    return N;

}

/* Tarea N�5 Inserccion ordenada */

void insertOrd( int x, const Lista L){
    Nodoc *p=L->alpha;
    p->key=x;
    while (p != NULL)
        if ( x < (*L)->val){
            p->sig=*L;
            *L=p;
        }
        else {
            Nodoc *q=L->alpha;
            q=*L;
            while (q->sig != NULL && x> (q->sig)->key)
                q=q->sig;
                p->sig=q->sig;
                q->sig=p;
        }
}

/* Tarea N�8 Ordena una lista de caracteres*/


/* Tarea N�7 Maximo de una lista no vacia */

void max(const Lista L){
    Nodo *p=L->alpha;
    p->key=x;
    while(*p!=NULL){
        Nodo *q=L->alpha;
        Nodo *q=*L;
        if (*q->key >= *p->key){
          *p=p->sig;
          *q=p->key;
          *q->key=*p->key;
        }
        else *p=*p->key;
    }
}

