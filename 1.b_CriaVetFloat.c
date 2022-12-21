#include <stdio.h>
#include <stdlib.h>

int CriaVetFloat() {

    int qtdElementosVet1;
    float *vet1;

    // recebe quantidade de elementos para o vetor 1
    scanf("%d", &qtdElementosVet1);

    // aloca uma espaços (qtdElementosVet) de memoria
    vet1 = (float*) malloc (qtdElementosVet1 * sizeof(float));

    printf("%p\n", &vet1);

    free(vet1);
    return 0;
}
