#include "child.h"
#include "childData.h"

void createListPemain(ListChild &L){
    first(L) = NULL;
}

addressChild allocatePemain(pemain x){
    addressChild P;
    P = new elmlistChild;
    info(P) = x;
    next(P) = NULL;
    return P;
}

void insertFirstPemain(ListChild &L, addressChild P){
    if(first(L) == NULL){
        first(L) = P;
        next(P) = P;
    }
    else{
        addressChild Q = first(L);
        while(next(Q) != first(L)){
            Q = next(Q);
        }
        next(P) = first(L);
        next(Q) = P;
        first(L) = P;
    }
}

void insertLastPemain(ListChild &L, addressChild P){
    if(first(L) == NULL){
        insertFirstPemain(L,P);
    }
    else{
        addressChild Q = first(L);
        while(next(Q) != first(L)){
            Q = next(Q);
        }
        next(Q) = P;
        next(P) = first(L);
    }
}

void insertAfterPemain(ListChild &L, addressChild Prec, addressChild P){
    if((Prec != NULL) && (first(L) != NULL)){
        next(P) = next(Prec);
        next(Prec) = P;
    }
}

void printInfoPemain(ListChild L){
    if(first(L) != NULL){
        addressChild P = first(L);
        do{
            lihatPemain(info(P));
            cout<<endl;
            P = next(P);
        }while(P != first(L));
    }
}
