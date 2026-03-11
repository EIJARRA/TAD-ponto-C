#include "TPonto.h"

int main(){

    float a, b, distance;

    TPonto* p1 = TPonto_create(3, 5);
    TPonto* p2 = TPonto_create(4, 6);
    TPonto* p3 = TPonto_create(2, 5);
    
    TPonto_print(p1);
    TPonto_print(p2);
    TPonto_print(p3);

    printf("\nDeletando p1:\n");
    DeletePoint(p1);
    
    TPonto_print(p1);

    printf("\nModificando o ponto p2:\n");
    modify_point(p2,3,7);
    TPonto_print(p2);

    printf("\nCopiando valores de p2 para as variáveis passadas por parâmetro\n");
    TPonto_get_x_y(p2, &a, &b);
    printf("\nValor de a: %.2f, b: %.2f\n", a, b);

    printf("Caculando distâcia euclidiana:\n");

    Calculate_Euclidean_instance(p2, p3, &distance);

    printf("Distancia euclidiana entre p2 e p3: %.2f", distance);
    
    return 0;
}