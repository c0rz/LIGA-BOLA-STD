#include "child.h"
#include "childData.h"

void createListPemain(ListChild &L){
    /*
        Dibuat Oleh : Achmad Alfansyah N ( 1301180006 )
        Kelas : IF - 42 - 04
        Judul Program : LIGA BOLA TELKOM
        Mata Kuliah : Struktur Data
    */
    first(L) = NULL;
}

addressChild allocatePemain(pemain x){
    /*
        Dibuat Oleh : Achmad Alfansyah N ( 1301180006 )
        Kelas : IF - 42 - 04
        Judul Program : LIGA BOLA TELKOM
        Mata Kuliah : Struktur Data
    */
    addressChild P;
    P = new elmlistChild;
    info(P) = x;
    next(P) = NULL;
    return P;
}

void insertFirstPemain(ListChild &L, addressChild P){
    /*
        Dibuat Oleh : Achmad Alfansyah N ( 1301180006 )
        Kelas : IF - 42 - 04
        Judul Program : LIGA BOLA TELKOM
        Mata Kuliah : Struktur Data
    */
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
    /*
        Dibuat Oleh : Achmad Alfansyah N ( 1301180006 )
        Kelas : IF - 42 - 04
        Judul Program : LIGA BOLA TELKOM
        Mata Kuliah : Struktur Data
    */
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
    /*
        Dibuat Oleh : Achmad Alfansyah N ( 1301180006 )
        Kelas : IF - 42 - 04
        Judul Program : LIGA BOLA TELKOM
        Mata Kuliah : Struktur Data
    */
    if((Prec != NULL) && (first(L) != NULL)){
        next(P) = next(Prec);
        next(Prec) = P;
    }
}

void printInfoPemain(ListChild L){
    /*
        Dibuat Oleh : Achmad Alfansyah N ( 1301180006 )
        Kelas : IF - 42 - 04
        Judul Program : LIGA BOLA TELKOM
        Mata Kuliah : Struktur Data
    */
    if(first(L) != NULL){
        addressChild P = first(L);
        cout << "  ---------------  LIST PEMAIN  ---------------" << endl;
        do{
            lihatPemain(info(P));
            cout<<endl;
            P = next(P);
        }while(P != first(L));
    } else {
        cout << "Silahkan inputkan pemain anda terlebih dahulu, karena data kosong..." << endl;
    }
}

void deleteFirstPemain(ListChild &L, addressChild &P){
    /*
        Dibuat Oleh : Achmad Alfansyah N ( 1301180006 )
        Kelas : IF - 42 - 04
        Judul Program : LIGA BOLA TELKOM
        Mata Kuliah : Struktur Data
    */
    P = first(L);
    if(P != NULL){
        if(next(P) == P){
            first(L) = NULL;
        }
        else{
            addressChild Q = first(L);
            while(next(Q) != first(L)){
                Q = next(Q);
            }
            first(L) = next(P);
            next(Q) = first(L);
        }
    }
}

void deleteLastPemain(ListChild &L, addressChild &P){
    /*
        Dibuat Oleh : Achmad Alfansyah N ( 1301180006 )
        Kelas : IF - 42 - 04
        Judul Program : LIGA BOLA TELKOM
        Mata Kuliah : Struktur Data
    */
    P = first(L);
    if(P != NULL){
        if(next(P) == P){
            deleteFirstPemain(L,P);
        }
        else{
            addressChild Q = first(L);
            while(next(next(Q)) != first(L)){
                Q = next(Q);
            }
            P = next(Q);
            next(Q) = first(L);
        }
    }
}

void deleteAfterPemain(ListChild &L, addressChild Prec, addressChild &P){
    /*
        Dibuat Oleh : Achmad Alfansyah N ( 1301180006 )
        Kelas : IF - 42 - 04
        Judul Program : LIGA BOLA TELKOM
        Mata Kuliah : Struktur Data
    */
    if((Prec != NULL) && (first(L) != NULL)){
        P = next(Prec);
        next(Prec) = next(P);
    }
}

void deleteByIDPemain(ListChild &L, addressChild &P){
    /*
        Dibuat Oleh : Achmad Alfansyah N ( 1301180006 )
        Kelas : IF - 42 - 04
        Judul Program : LIGA BOLA TELKOM
        Mata Kuliah : Struktur Data
    */
    if(P == first(L)){
        deleteFirstPemain(L,P);
    }
    else if(next(P) == first(L)){
        deleteLastPemain(L,P);
    }
    else{
        addressChild Q = first(L);
        while(next(Q) != P){
            Q = next(Q);
        }
        deleteAfterPemain(L,Q,P);
    }
}

addressChild findElmPemain(ListChild L, pemain x){
    /*
        Dibuat Oleh : Achmad Alfansyah N ( 1301180006 )
        Kelas : IF - 42 - 04
        Judul Program : LIGA BOLA TELKOM
        Mata Kuliah : Struktur Data
    */
    if(first(L) != NULL){
        addressChild P = first(L);
        do{
            if(info(P).id_pemain == x.id_pemain){
                return P;
            }
            P = next(P);
        }while(P != first(L));
    }
    return NULL;
}
