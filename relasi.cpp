#include "relasiList.h"
#include "childData.h"
#include "parentData.h"

void createListRelation(ListRelation &L)
{
    /*
        Dibuat Oleh : Cornelius Stephanus Alfredo ( 1301180287 )
        Kelas : IF - 42 - 04
        Judul Program : LIGA BOLA TELKOM
        Mata Kuliah : Struktur Data
    */
    first(L) = NULL;
}

addressRelation allocateRelation(addressParent aP, addressChild aC)
{
    /*
        Dibuat Oleh : Cornelius Stephanus Alfredo ( 1301180287 )
        Kelas : IF - 42 - 04
        Judul Program : LIGA BOLA TELKOM
        Mata Kuliah : Struktur Data
    */
    addressRelation P = new elmlistRelation;
    parent(P) = aP;
    child(P)  = aC;
    next(P) = NULL;
    return P;
}

void insertRelation(ListRelation &L, addressRelation P)
{
    /*
        Dibuat Oleh : Cornelius Stephanus Alfredo ( 1301180287 )
        Kelas : IF - 42 - 04
        Judul Program : LIGA BOLA TELKOM
        Mata Kuliah : Struktur Data
    */
    if(first(L) == NULL)
    {
        first(L) = P;
    }
    else
    {
        next(P) = first(L);
        first(L) = P;
    }
}

void deleteRelation(ListRelation &L, addressRelation &P)
{
    /*
        Dibuat Oleh : Cornelius Stephanus Alfredo ( 1301180287 )
        Kelas : IF - 42 - 04
        Judul Program : LIGA BOLA TELKOM
        Mata Kuliah : Struktur Data
    */
    if(first(L) != NULL)
    {
        if(P == first(L))
        {
            if(next(first(L)) != NULL)
            {
                first(L) = next(first(L));
            } else
            {
                delete P;
            }
        }
        else
        {
            addressRelation Q = first(L);
            while(next(Q) != NULL)
            {
                if(next(Q) == P)
                {
                    next(Q) = next(P);
                    break;
                }
                Q = next(Q);
            }
        }
    }
}

addressRelation findRelation(ListRelation L, addressParent aP, addressChild aC)
{
    /*
        Dibuat Oleh : Cornelius Stephanus Alfredo ( 1301180287 )
        Kelas : IF - 42 - 04
        Judul Program : LIGA BOLA TELKOM
        Mata Kuliah : Struktur Data
    */
    if(first(L) != NULL)
    {
        addressRelation P = first(L);
        while(P != NULL)
        {
            if((parent(P) == aP) && (child(P) == aC))
            {
                return P;
            }
            P = next(P);
        }
    }
    return NULL;
}

void printClubdanPemainByID(addressParent listClub, ListRelation listRelasi)
{
    /*
        Dibuat Oleh : Cornelius Stephanus Alfredo ( 1301180287 )
        Kelas : IF - 42 - 04
        Judul Program : LIGA BOLA TELKOM
        Mata Kuliah : Struktur Data
    */
    lihatClub(info(listClub));
    bool ada = false;
    addressRelation pRelasi = first(listRelasi);
    cout<<"  Pemain     : ";
    while(pRelasi != NULL)
    {
        if(parent(pRelasi) == listClub)
        {
            ada = true;
            cout<<info(child(pRelasi)).nama_pemain<<", ";
        }
        pRelasi = next(pRelasi);
    }
    if(ada == false)
    {
        cout<<"<kosong>";
    }
}

void printClubdanPemain(ListParent listClub, ListRelation listRelasi)
{
    /*
        Dibuat Oleh : Cornelius Stephanus Alfredo ( 1301180287 )
        Kelas : IF - 42 - 04
        Judul Program : LIGA BOLA TELKOM
        Mata Kuliah : Struktur Data
    */
    addressParent cClub = first(listClub);
    while(cClub != NULL)
    {
        printClubdanPemainByID(cClub,listRelasi);
        cout<<endl<<endl;
        cClub = next(cClub);
    }
}
