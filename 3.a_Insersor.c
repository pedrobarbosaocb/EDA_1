
int Insersor() {
    char c_inserido;
    char *pvetcar;
    int ptammax, pqtde;

    scanf("%c", &c_inserido);
    scanf("%d", &ptammax);

    pqtde = ptammax - sizeof(pvetcar);

    pvetcar = (char*) malloc (ptammax * sizeof(char));

    pvetcar[0] = c_inserido;

    free(pvetcar);
    return 0;
}
