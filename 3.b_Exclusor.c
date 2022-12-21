
int Exclusor() {
    char c_inserido;
    char c_removido;
    char *pvetcar;
    int ptammax, pqtde;

    // recebe o char a ser inserido
    scanf("%c", &c_inserido);
    scanf("%d", &ptammax);

    pqtde = ptammax - sizeof(pvetcar);

    pvetcar = (char*) malloc (ptammax * sizeof(char));

    pvetcar[0] = c_inserido;

    // mostra todos os elementos no array
    for(int i=0; i<sizeof(pvetcar); i++)
    {
        printf("{ %c }\t", pvetcar[i]);
    }

    // recebe o char a ser removido
    scanf("%c", &c_removido);
    for( int i=0; i<sizeof(pvetcar); i++ ){
        if(pvetcar[i] = c_removido){
            pvetcar[i] = pvetcar[i+1];
            break;
        }
    }

    // mostra todos os elementos no array
    for(int i=0; i<sizeof(pvetcar); i++)
    {
        printf("{ %c }\t", pvetcar[i]);
    }

    free(pvetcar);
    return 0;
}
