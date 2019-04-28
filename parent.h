#ifndef PARENT_H_INCLUDED
#define PARENT_H_INCLUDED

#include <iostream>
#include "parentData.h"

#define first(L) L.first
#define last(L) L.last
#define next(P) P->next
#define prev(P) P->prev
#define info(P) P->info

using namespace std;

typedef struct elmlistParent *addressParent;

struct elmlistParent{
    club info;
    addressParent next;
    addressParent prev;
};

struct ListParent{
    addressParent first;
    addressParent last;
};

#endif // PARENT_H_INCLUDED
