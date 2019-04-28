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


struct elmlistRelation{
    addressParent parent;
    addressChild child;
    addressRelation next;
};

struct ListRelation{
    addressRelation first;
};

#endif // RELASILIST_H_INCLUDED
