
#include <stdio.h>
#include<stdlib.h>

char Insersor(int ptammax) {
    // declarando variaveis
    char c_inserido;
    char *pvetcar;
    int pqtde;


    pvetcar = (char*) malloc (ptammax * sizeof(char));

    // imprime tudo que já está dentro do pvetchar, ou seja, os lixos
    for(int i=0; i<(ptammax*sizeof(char)); i++)
    {
        printf("{ %c }\t", pvetcar[i]);
    }

    // limpa o buffer (que estava com o ptammax)
    fflush(stdin);
    printf("\n--\n");

    // recebe adiciona novos char ao pvetchar
    for(int i=0; i<ptammax; i++)
    {
        fflush(stdin);
        scanf("%c", &c_inserido);
        pvetcar[i] = c_inserido;
        printf("{ %p }\n", &c_inserido);
    }

    printf("\n%p\n", &pvetcar);

    // mostra todos os endereços de memoria separados para cada item do pvetcar
    for(int i=0; i<ptammax; i++)
    {
        printf("{ %p }\t", &pvetcar[i]);
    }
    printf("\n");

    // mostra todos os char armazenados no pvetchar
    for(int i=0; i<ptammax; i++)
    {
        printf("{ %c }\t", pvetcar[i]);
    }
    return pvetcar;
}
