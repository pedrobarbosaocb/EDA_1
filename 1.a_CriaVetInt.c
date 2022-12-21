#include <stdio.h>
#include <stdlib.h>

int CriaVetInt() {

    int qtdElementosVet1;
    int *vet1;

    // recebe quantidade de elementos para o vetor 1
    scanf("%d", &qtdElementosVet1);

    // aloca uma espaços (qtdElementosVet) de memoria
    vet1 = (int*) malloc (qtdElementosVet1 * sizeof(int));

    printf("%p\n", &vet1);

    free(vet1);
    return 0;
}
