#ifndef TAROLO_H
#define TAROLO_H

#include "cucc.h"

#define MAX_DB_CUCC 256

typedef struct
{
    int db_cucc;
    Cucc *cuccok[MAX_DB_CUCC];
} Taska;

#endif
