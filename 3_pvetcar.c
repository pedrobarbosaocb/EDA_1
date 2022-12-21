int main_pvetcar() {
    // declarando variaveis
    char *pvetcar;
    int ptammax;

    // lendo tamanho que será alocaro para o ponteiro para char pvetcar
    printf("Insira o tamanho do espaço de memoria a ser alocado:\n");
    scanf("%d", &ptammax);

    pvetcar = Insersor(ptammax);

    printf("\n\ninicio da main\n\n");
    for(int i=0; i<ptammax; i++)
    {
        printf("{ %c }\t", pvetcar[i]);
    }

    pvetcar = Exclusor(pvetcar, ptammax);

    printf("\n\nParte do exclusor\n\n");
    for(int i=0; i<ptammax; i++)
    {
        printf("{ %c }\t", pvetcar[i]);
    }

    // libera os espaços de memória
    //free(c_inserido);
    free(pvetcar);
}
