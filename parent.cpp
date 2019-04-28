#include "parent.h"
#include "parentData.h"

void createListClub(ListParent &L){
    first(L) = NULL;
    last(L)  = NULL;
}

addressParent allocateClub(club x){
    addressParent P;
    P = new elmlistParent;
    info(P) = x;
    prev(P) = NULL;
    next(P) = NULL;
    return P;
}

void insertFirstClub(ListParent &L, addressParent P){
    if((first(L) == NULL) && (last(L) == NULL)){
        first(L) = P;
        last(L) = P;
    }
    else{
        next(P) = first(L);
        prev(first(L)) = P;
        first(L) = P;
    }
}
void insertLastClub(ListParent &L, addressParent P){
    if((first(L) == NULL) && (last(L) == NULL)){
        insertFirstClub(L,P);
    }
    else{
        next(last(L)) = P;
        prev(P) = last(L);
        last(L) = P;
    }
}

void printInfoClub(ListParent L){
    if((first(L) != NULL) && (last(L) != NULL)){
        addressParent P = first(L);
        while(P != NULL){
            cout << info(P).nama_club;
            cout<<endl;
            P = next(P);
        }
    }
}

