#ifndef CHILD_H_INCLUDED
#define CHILD_H_INCLUDED

#include <iostream>
#include "childData.h"

#define first(L) L.first
#define next(P) P->next
#define info(P) P->info

using namespace std;

typedef struct elmlistChild *addressChild;

    /*
        Dibuat Oleh : Cornelius Stephanus Alfredo ( 1301180287 )
        Kelas : IF - 42 - 04
        Judul Program : LIGA BOLA TELKOM
        Mata Kuliah : Struktur Data
    */

struct elmlistChild{
    pemain info;
    addressChild next;
};

struct ListChild{
    addressChild first;
};

void createListPemain(ListChild &L);
addressChild allocatePemain(pemain x);
void insertFirstPemain(ListChild &L, addressChild P);
void insertLastPemain(ListChild &L, addressChild P);
void insertAfterPemain(ListChild &L, addressChild Prec, addressChild P);
void printInfoPemain(ListChild L);
void deleteFirstPemain(ListChild &L, addressChild &P);
void deleteLastPemain(ListChild &L, addressChild &P);
void deleteAfterPemain(ListChild &L, addressChild Prec, addressChild &P);
void deleteByIDPemain(ListChild &L, addressChild &P);
addressChild findElmPemain(ListChild L, pemain x);

#endif // CHILD_H_INCLUDED
