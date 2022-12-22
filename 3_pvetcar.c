#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main_pvetcar() {

    int ptammax = 5, pqtde = 0;
    char pvetcar[ptammax];
    char c_inserido;
    char c_removido = 'a';

    for(int i = 0; i<ptammax; i++){
        scanf("%c", &c_inserido);
        Insersor(c_inserido, &pvetcar, &pqtde);
        fflush(stdin);
    }

    for(int i = 0; i<pqtde; i++){
        printf("{ %c }\t", pvetcar[i]);
    }

    /*Exclusor(c_removido, &pvetcar, &pqtde);

    for(int i = 0; i<=pqtde; i++){
        printf("{ %c }\t", pvetcar[i]);
    }*/
}


