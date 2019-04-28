#ifndef CHILD_H_INCLUDED
#define CHILD_H_INCLUDED

#include <iostream>
#include "childData.h"

#define first(L) L.first
#define next(P) P->next
#define info(P) P->info

using namespace std;

typedef struct elmlistChild *addressChild;

struct elmlistChild{
    pemain info;
    addressChild next;
};

struct ListChild{
    addressChild first;
};

void createListGenre(ListChild &L);
addressChild allocatePemain(pemain x);
void insertFirstPemain(ListChild &L, addressChild P);
void insertLastPemain(ListChild &L, addressChild P);
void insertAfterPemain(ListChild &L, addressChild Prec, addressChild P);
void printInfoPemain(ListChild L);

#endif // CHILD_H_INCLUDED
