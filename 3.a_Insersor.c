#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Insersor(char c_inserido, char *pvetcar, int *pqtde){
    pvetcar[*pqtde] = c_inserido;
    *pqtde = *pqtde + 1;
}
