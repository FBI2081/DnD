#include <stdlib.h>

typedef struct
{
    int darab;
    int oldal;
} Dobas;

int dob(Dobas d)
{
    int osszeg = 0;
    for(int i = 0; i < d.darab; i++)
        osszeg += rand() % d.oldal + 1;
    return osszeg;
}
