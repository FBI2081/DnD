//pls nem nyúlj hozzá, majd befejezem

typedef struct
{
    int lab;
    int huvelyk; //ez max 11 lehet, 12 helyett 0 kell, hogy legyyen és a labnak kell nőnie
} hossz;

typedef enum
{
    TORVENYES_JO, SEMLEGES_JO, KAOTIKUS_JO,
    TORVENYES_SEMLEGES, SEMLEGES, KAOTIKUS_SEMLEGES,
    TORVENYES_GONOSZ, SEMLEGES_GONOSZ, KAOTIKUS_GONOSZ
} e_jellem;

typedef struct
{
    chart nev[64];
    char kaszt[16];
    char faj[16];
    int szint;
    int tapasztalati_pontok;
    int ero, ugyesseg, allokepesseg, intelligencia, bolcsesseg, karizma;
    //valami enum meret;
    int kor;
    //valami enum nem (igen csak férfi vagy nő lehet valaki)
    hossz magassag;
    char szem[32];
    char haj[32]; // ha nem tetszik, írd át

} karakter;
