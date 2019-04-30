#include "parent.h"
#include "parentData.h"

void createListClub(ListParent &L){
    /*
        Dibuat Oleh : Achmad Alfansyah N ( 1301180006 )
        Kelas : IF - 42 - 04
        Judul Program : LIGA BOLA TELKOM
        Mata Kuliah : Struktur Data
    */
    first(L) = NULL;
    last(L)  = NULL;
}

addressParent allocateClub(club x){
    /*
        Dibuat Oleh : Achmad Alfansyah N ( 1301180006 )
        Kelas : IF - 42 - 04
        Judul Program : LIGA BOLA TELKOM
        Mata Kuliah : Struktur Data
    */
    addressParent P;
    P = new elmlistParent;
    info(P) = x;
    prev(P) = NULL;
    next(P) = NULL;
    return P;
}

void insertFirstClub(ListParent &L, addressParent P){
    /*
        Dibuat Oleh : Achmad Alfansyah N ( 1301180006 )
        Kelas : IF - 42 - 04
        Judul Program : LIGA BOLA TELKOM
        Mata Kuliah : Struktur Data
    */
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
    /*
        Dibuat Oleh : Achmad Alfansyah N ( 1301180006 )
        Kelas : IF - 42 - 04
        Judul Program : LIGA BOLA TELKOM
        Mata Kuliah : Struktur Data
    */
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
    /*
        Dibuat Oleh : Achmad Alfansyah N ( 1301180006 )
        Kelas : IF - 42 - 04
        Judul Program : LIGA BOLA TELKOM
        Mata Kuliah : Struktur Data
    */
    if((first(L) != NULL) && (last(L) != NULL)){
        addressParent P = first(L);
        cout << "  ---------------  LIST CLUB  ---------------" << endl;
        while(P != NULL){
            lihatClub(info(P));
            cout<<endl;
            P = next(P);
        }
    }
    else
    {
        cout << "Silahkan inputkan club anda terlebih dahulu, karena data kosong..." << endl;
    }
}

void deleteFirstClub(ListParent &L, addressParent &P){
    /*
        Dibuat Oleh : Achmad Alfansyah N ( 1301180006 )
        Kelas : IF - 42 - 04
        Judul Program : LIGA BOLA TELKOM
        Mata Kuliah : Struktur Data
    */
    if(first(L) != NULL){
        P = first(L);
        if(first(L) == last(L)){
            first(L) = NULL;
            last(L) = NULL;
        }
        else{
            first(L) = next(P);
            prev(first(L)) = NULL;
            next(P) = NULL;
        }
    }
}

void deleteLastClub(ListParent &L, addressParent &P){
    /*
        Dibuat Oleh : Achmad Alfansyah N ( 1301180006 )
        Kelas : IF - 42 - 04
        Judul Program : LIGA BOLA TELKOM
        Mata Kuliah : Struktur Data
    */
    if(last(L) != NULL){
        P = last(L);
        if(first(L) == last(L)){
            deleteFirstClub(L,P);
        }
        else{
            last(L) = prev(P);
            next(last(L)) = NULL;
            prev(P) = NULL;
        }
    }
}

void deleteAfterClub(ListParent &L, addressParent Prec, addressParent &P){
    /*
        Dibuat Oleh : Achmad Alfansyah N ( 1301180006 )
        Kelas : IF - 42 - 04
        Judul Program : LIGA BOLA TELKOM
        Mata Kuliah : Struktur Data
    */
    if((Prec != NULL) && next(Prec) != NULL){
        P = next(Prec);
        next(Prec) = next(P);
        prev(next(P)) = Prec;
        next(P) = NULL;
        prev(P) = NULL;
    }
}

void deleteByIDClub(ListParent &L, addressParent &P){
    /*
        Dibuat Oleh : Achmad Alfansyah N ( 1301180006 )
        Kelas : IF - 42 - 04
        Judul Program : LIGA BOLA TELKOM
        Mata Kuliah : Struktur Data
    */
    if(P == first(L)){
        deleteFirstClub(L,P);
    }
    else if(P == last(L)){
        deleteLastClub(L,P);
    }
    else{
        addressParent Q = prev(P);
        deleteAfterClub(L,Q,P);
    }
}

addressParent findElmClub(ListParent L, club x){
    /*
        Dibuat Oleh : Achmad Alfansyah N ( 1301180006 )
        Kelas : IF - 42 - 04
        Judul Program : LIGA BOLA TELKOM
        Mata Kuliah : Struktur Data
    */
    if((first(L) != NULL) && (last(L) != NULL)){
        addressParent P = first(L);
        while(P != NULL){
            if(info(P).id_club == x.id_club){
                return P;
            }
            P = next(P);
        }
    }
    return NULL;
}
