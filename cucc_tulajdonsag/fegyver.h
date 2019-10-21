#include "../kocka.h"
#include "tulajdonsag.h"

typedef enum
{
    EGYSZERU_KOZEL,  EGYSZERU_TAVOL,
    HARCI_KOZEL,     HARCI_TAVOL,
    EGZOTIKUS_KOZEL, EGZOTIKUS_TAVOL
} e_fegyver_tipus;

#define SZURO 0b100
#define ZUZO  0b010
#define VAGO  0b001

typedef struct
{
    e_fegyver_tipus tipus;
    e_targy_meret meret;
    //nev
    //ertek
    Dobas sebzes[2];
    int krit_zona, krit_szorzo;
    int hatotav;
    //tomeg
    char sebzes_tipus;
    int lovedek_azon;
} Fegyver_tulajdonsag;
