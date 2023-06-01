int comprimeSequencia (byte* in, int n, byte* out)
{
    int inicio = 0, usadas = 0, val, cont; //cont = 0

    while (inicio < n)
    {
        val = in [inicio]; //recebe o primeiro elemento
        while (inicio+cont < n && in [inicio+cont] == val)
            cont++;

        if (cont == 1)
            out [usadas] = val; //usadas++
        else
        {
            out [usadas] = cont; //usadas++
            out [usadas+1] = val; //usadas++
        }
        inicio += cont;
    }
    return usadas; //return
}
