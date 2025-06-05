int somatorio(int tam, int seq[]){
    int soma = 0;
    if (tam == 0)
    {
        return 0;
    }

    if (tam == 1)
    {
        return seq[0];
    }

    if (tam > 1)
    {    
    return seq[0] + somatorio(tam-1, seq+1);
    }
    return 0;
}