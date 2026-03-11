#include "TPonto.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

struct _ponto{
    float x, y;
};
/**
 * Cria instâncias de TPonto;
 * @param float x da coordenada x
 * @param float y da coordenada y
 * @return TPonto* instância para um TPonto
 */
TPonto* TPonto_create(float x, float y){
    TPonto *novo = malloc(sizeof(TPonto));
    if(novo!=NULL){
        novo->x = x;
        novo->y = y;
    }
    return novo;
}
/**
 * Imprime um TPonto preenchido.
 */
void TPonto_print(TPonto* ponto){
    if(ponto != NULL){
        printf("(%0.2f, %0.2f)\n", ponto->x, ponto->y);
    }
}

/*Deleta uma instância de ponto*/
void DeletePoint(TPonto* p){
    if(p != NULL){
        free(p);
    }
}

void modify_point(TPonto* m, float mx, float my){
    if(m != NULL){
        m->x = mx; 
        m->y = my;
    }
}

void TPonto_get_x_y(TPonto* c, float* a, float* b){
    if(c!= NULL){
        *a = c->x;
        *b = c->y;
    }
}

void Calculate_Euclidean_instance(TPonto* p1, TPonto* p2, float* d){
    float dx, dy;

    dx = p1->x - p2->x;
    dy = p1->y - p2->y;

    *d = sqrt(dx * dx + dy * dy);
}


