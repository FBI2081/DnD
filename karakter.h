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

typedef enum
{
    ERO, UGYESSEG, ALLOKEPESSEG, INTELLIGENCIA, BOLCSESSEG, KARIZMA;
} e_tulajdonsag;

typedef struct
{
    int ertek;
    int modosito; //todo modosito = 10-től mért távolság/2 lefele kerekítve ha nagyobb mint 10 és felfele, ha kisebb
} tulajdonsag;

typedef enum
{
    SZIVOSSAG, GYORSASAG, AKARATERO
} e_mento;

typedef struct
{
    int alap;
    e_tulajdonsag kapcsolodo_tulajdonsag;
    int vegleges;// vegleges = alap_modosito + tulajdonsagok[kapcsolodo_tulajdonsag.modosito] + mágikus + egyéb;
} mento;

typedef enum
{
    NO, FERFI//igen csak nő vagy férfi lehet valaki
} e_nem;

typedef struct
{
    chart nev[64];
    char kaszt[16];
    char faj[16];
    int szint;
    int tapasztalati_pontok;
    tulajdonsag tulajdonsagok[6];//ide változónak az e_tulajdonsag enum
    //valami enum meret;
    int kor;
    e_nem nem;
    hossz magassag;
    char szem[32];
    char haj[32]; // ha nem tetszik, írd át
    mento motok[3];// ide változónak az e_mento enum
} karakter;
