#define MAX_BENFEITORIAS 5
#define MAX_EXERCITOS 5

typedef struct
{
float lucro_base;
Benfeitoria* benfeitorias [MAX_BENFEITORIAS];
int n_benfeitorias;
Exercito* exercitos [MAX_EXERCITOS];
int n_exercitos;
} Territorio;

typedef struct
{
float lucro_mult;
float lucro_soma;
} Benfeitoria;

typedef struct
{
float custo;
} Exercito;

typedef struct
{
Territorio* territorios [MAX_TERRITORIOS];
int n_territorios;
} Faccao;

float lucroTotal(Faccao* f) {
    float lucro_total = 0.0;

    for (int i = 0; i < f->n_territorios; i++) {
        Territorio* territorio = f->territorios[i];
        float lucro_territorio = territorio->lucro_base;

        for (int j = 0; j < territorio->n_benfeitorias; j++) {
            Benfeitoria* benfeitoria = territorio->benfeitorias[j];
            lucro_territorio *= benfeitoria->lucro_mult;
        }

        for (int j = 0; j < territorio->n_benfeitorias; j++) {
            Benfeitoria* benfeitoria = territorio->benfeitorias[j];
            lucro_territorio += benfeitoria->lucro_soma;
        }

        for (int j = 0; j < territorio->n_exercitos; j++) {
            Exercito* exercito = territorio->exercitos[j];
            lucro_territorio -= exercito->custo;
        }
        lucro_total += lucro_territorio;
    }
    return lucro_total;
}