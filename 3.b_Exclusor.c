#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Exclusor(char c_removido, char *pvetcar, int *pqtde){
    for(int i=0; i < *pqtde; i++) {
        if(c_removido==*pvetcar){
            printf("\n\"%c\" foi removido\n", c_removido);
            for(int j=0;j<=*pqtde;j++){
                    *pvetcar = *(pvetcar + 1);
                    pvetcar = pvetcar + 1;
            }
            *pqtde = *pqtde - 1;
            break;
        } else {
            pvetcar = pvetcar + 1;
        }
    }
}
