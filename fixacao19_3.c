void misterio (int** t, int grau)
{
    int a, b, c, d;
    for (a = 0; a < grau; a++)
    {
        c = 0;
        d = 0;
        for (b = 0; b < grau; b++)
            c += t [a][b];
        for (b = 0; b <= a; b++)
            d += t [a-b][b];
        printf ("%d\t%d\n", c, d);
    }
}

/*
1 1
2 1
4 2
8 3
16 5
32 8
64 13
128 21
*/