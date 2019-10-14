#include "kocka.h"

#include <stdlib.h>

int dob(Dobas d)
{
    int osszeg = 0;
    for(int i = 0; i < d.darab; i++)
        osszeg += rand() % d.oldal + 1;
    return osszeg;
}
