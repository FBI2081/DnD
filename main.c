#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "kocka.h"

#define MAXLEVEL 20

void ermek_generalasa(int szint)
{
    struct
    {
        struct
        {
            int min, max, db, oldal, szorzo;
        }fajta[4];
    }ermeszint[MAXLEVEL];
    FILE *ermeadat = fopen("ermetabla.dat", "r");
    for(int sz = 0; sz < MAXLEVEL; sz++)
    {
        for(int f = 0; f < 4; f++)
        {
            fscanf(ermeadat,
                   "%d %d %d %d %d",
                   &ermeszint[sz].fajta[f].min,
                   &ermeszint[sz].fajta[f].max,
                   &ermeszint[sz].fajta[f].db,
                   &ermeszint[sz].fajta[f].oldal,
                   &ermeszint[sz].fajta[f].szorzo
            );
        }
    }
    fclose(ermeadat);

    int d100 = dob((Dobas){1, 100});
    for(int f = 3; f >= 0; f--)
    {
        if(d100 >= ermeszint[szint].fajta[f].min)
        {
            //todo inventoryhoz hozzáadni a megfelelőt.
            break;
        }
    }
}

void javak_generalasa(int szint)
{

}

void targyak_generalasa(int szint)
{

}

void kincs_generalasa(int szint)
{
    ermek_generalasa(szint);
    javak_generalasa(szint);
    targyak_generalasa(szint);
}

int main()
{
    srand(time(NULL));
    int szint = 1;
    kincs_generalasa(szint);
    return 0;
}
