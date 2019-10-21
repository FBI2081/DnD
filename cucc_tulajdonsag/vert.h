
typedef enum {
    KONNYU, KOZEPES, NEHEZ
} e_vert_tipus;

typedef struct
{
    e_vert_tipus tipus;
    //nev
    //ertek
    int vedelem_modosito;
    int max_ugyesseg;
    int modosito_vertben;
    int varazslat_rontas_esely;
    //tomeg
} Vert_tulajdonsag;

typedef struct
{
    e_targy_meret meret;
} Vert_tulajdonsag_dinamikus;
