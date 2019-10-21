#ifndef TULAJDONSAG_H
#define TULAJDONSAG_H

typedef enum {ALTALANOS, FEGYVER, VERT, VARAZSTARGY} e_osztaly;

typedef enum
{
    POTTOM, KICSI, KOZEPES, NAGY, HATALMAS
} e_targy_meret;

typedef struct
{
    char nev_alapveto[32];
    char nev_jelzok[64];
    e_osztaly osztaly;
    int azon2;
    int ertek;
    float tomeg;
} Altalanos_tulajdonsag;

void altalanos_tulajdonsag_nev_szetbont(char *tablai, char *cel_alap, char *cel_jel);

#endif
