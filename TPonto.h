





#ifndef TPONTO_H
#define TPONTO_H
typedef struct _ponto TPonto;
/**
 * Cria instâncias de TPonto;
 * @param float x da coordenada x
 * @param float y da coordenada y
 * @return TPonto* instância para um TPonto
 */
TPonto* TPonto_create(float, float);
/**
 * Imprime um TPonto preenchido.
 */
void TPonto_print(TPonto*);

void DeletePoint(TPonto*);

void modify_point(TPonto*, float, float);

void TPonto_get_x_y(TPonto*, float* , float*);

void Calculate_Euclidean_instance(TPonto*, TPonto*, float*);

#endif