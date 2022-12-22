#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main_pvetcar() {

    int ptammax, pqtde = 0;
    char c_inserido;
    char c_removido = 'a';

    printf("Qual o tamanho do vetor char?\n");
    scanf("%d", &ptammax);
    fflush(stdin);

    char pvetcar[ptammax];

    printf("\n\nInsira todos os caracteres do array\n");

    for(int i = 0; i<ptammax; i++){
        scanf("%c", &c_inserido);
        Insersor(c_inserido, &pvetcar, &pqtde);
        fflush(stdin);
    }

    printf("\nSeu vetor esta assim:\n");
    for(int i = 0; i<pqtde; i++){
        printf("{ %c }\t", pvetcar[i]);
    }

    printf("\n\nInsira o valor a ser removido:\n");
    scanf("%c", &c_removido);
    Exclusor(c_removido, &pvetcar[0], &pqtde);

    printf("\nSeu vetor esta assim:\n");
    for(int i = 0; i<pqtde; i++){
        printf("{ %c }\t", pvetcar[i]);
    }
}


