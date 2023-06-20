int contaLetras(char *s){

    char letra=s[0];
    int cont=0;

     while (letra!= '\0'){
        cont++;
        letra=s[cont];

     }
    return cont;
}
