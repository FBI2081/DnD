#include "cucc_tulajdonsag/tulajdonsag.h"
#include "cucc_tulajdonsag/fegyver.h"
#include "cucc_tulajdonsag/vert.h"
#include "cucc_tulajdonsag/varazstargy.h"

struct
{
    int db_altalanos;
    Altalanos_tulajdonsag *altalanos_tulajdonsag[8192];
    int db_fegyver;
    Fegyver_tulajdonsag *fegyver_tulajdonsag[2048];
    int db_vert;
    Vert_tulajdonsag *vert_tulajdonsag[128];
    int db_varazstargy;
    Varazstargy_tulajdonsag *varazstargy_tulajdonsag[4096];
} adatbazis;

void adatbazis_inicializal(void);
void adatbazis_urit(void);

void adatbazis_fegyvertabla_beolvas(void);
