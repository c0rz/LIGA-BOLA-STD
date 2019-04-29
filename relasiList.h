#ifndef RELASILIST_H_INCLUDED
#define RELASILIST_H_INCLUDED

#include <iostream>
#include "child.h"
#include "parent.h"

#define first(L) L.first
#define parent(P) P->parent
#define child(P) P->child
#define next(P) P->next


using namespace std;

typedef struct elmlistParent *addressParent;
typedef struct elmlistChild *addressChild;
typedef struct elmlistRelation *addressRelation;

    /*
        Dibuat Oleh : Cornelius Stephanus Alfredo ( 1301180287 )
        Kelas : IF - 42 - 04
        Judul Program : LIGA BOLA TELKOM
        Mata Kuliah : Struktur Data
    */

struct elmlistRelation{
    addressParent parent;
    addressChild child;
    addressRelation next;
};

struct ListRelation{
    addressRelation first;
};

void createListRelation(ListRelation &L);
addressRelation allocateRelation(addressParent aP, addressChild aC);
void insertRelation(ListRelation &L, addressRelation P);
void deleteRelation(ListRelation &L, addressRelation &P);
addressRelation findRelation(ListRelation L, addressParent aP, addressChild aC);
void printClubdanPemainByID(addressParent listClub, ListRelation listRelasi);
void printClubdanPemain(ListParent listClub, ListRelation listRelasi);


#endif // RELASILIST_H_INCLUDED
