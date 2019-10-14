#include "tulajdonsag.h"

#include <stdio.h>

void altalanos_tulajdonsag_nev_szetbont(char *tablai, char *cel_alap, char *cel_jel)
{
    cel_jel[0] = '\0';
    sscanf(tablai,
           "%[^,], %[]",
           cel_alap,
           cel_jel
    );
}
