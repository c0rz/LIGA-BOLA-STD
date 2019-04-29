#ifndef PARENT_H_INCLUDED
#define PARENT_H_INCLUDED

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "parentData.h"

#define first(L) L.first
#define last(L) L.last
#define next(P) P->next
#define prev(P) P->prev
#define info(P) P->info

using namespace std;

typedef struct elmlistParent *addressParent;

    /*
        Dibuat Oleh : Cornelius Stephanus Alfredo ( 1301180287 )
        Kelas : IF - 42 - 04
        Judul Program : LIGA BOLA TELKOM
        Mata Kuliah : Struktur Data
    */

struct elmlistParent{
    club info;
    addressParent next;
    addressParent prev;
};

struct ListParent{
    addressParent first;
    addressParent last;
};

void createListClub(ListParent &L);
addressParent allocateClub(club x);
void insertLastClub(ListParent &L, addressParent P);
void printInfoClub(ListParent L);
void deleteFirstClub(ListParent &L, addressParent &P);
void deleteFirstClub(ListParent &L, addressParent &P);
void deleteAfterClub(ListParent &L, addressParent Prec, addressParent &P);
void deleteByIDClub(ListParent &L, addressParent &P);
addressParent findElmClub(ListParent L, club x);
void skor(ListParent &L, club &x, club &y);
int pointByScore(ListParent &L, club &x, club &y);
#endif // PARENT_H_INCLUDED
