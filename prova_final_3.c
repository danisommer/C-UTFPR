unsigned int verificaMaior (int **matriz, int nl, int nc, int n){

    int maior = 0, multi1, multi2, multi3, multi4, i, j, k;
    for(i=0;i<nl;i++)
        for(j=0;j<nc;j++){
            multi1=1;
            multi2=1;
            multi3=1;
            multi4=1;
            for(k=0;k<n;k++){

                if(i+n>=0)
                    multi1*=matriz[i+k][j];
                if(i-n<=nc)
                    multi2*=matriz[i-k][j];
                if(j+n>=0)
                    multi3*=matriz[i][j+k];
                if(j-n>=nl)
                    multi4*=matriz[i][j-k];
            }
            if (multi1>maior)
                maior = multi1;
            if (multi2>maior)
                maior = multi2;
            if (multi3>maior)
                maior = multi3;
            if (multi4>maior)
                maior = multi4;
        }

    return maior;
}

