
char Exclusor(char *pvetcar, int ptammax) {
    char c_removido = "a";
    int pqtde;

    for(int i; i<ptammax; i++)
    {
            if(c_removido = pvetcar[i]){
                pvetcar[i] = pvetcar[i+1];
                break;
            }
    }

    return pvetcar;
}
