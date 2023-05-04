void removeExtremos (int *n, int *pri, int *ult)
{
    int tn, pot = 1;
    tn = *n;
    while(tn >= 10)
    {
        tn = tn/10;
        pot *= 10;
    }
    *pri = *n / pot;
    *ult = *n % 10;
    *n = *n % pot;
    *n = *n / 10;
}

int main ()
{

    int n = 1122211, pri=0, ult=0;

    while (pri == ult && n!=0)
    {
        removeExtremos(&n, &pri, &ult);
    }

    if (pri == ult){

        printf("Palindromo");

    } else {

        printf("Nao Palindromo");

    }


    return 0;
}
