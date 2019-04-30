#ifndef CASEFUNGSILITAS_H_INCLUDED
#define CASEFUNGSILITAS_H_INCLUDED

#include <cstdlib>
#include <ctime>

#include "parent.h"
#include "child.h"
#include "relasiList.h"

    /*
        Dibuat Oleh : Cornelius Stephanus Alfredo ( 1301180287 )
        Kelas : IF - 42 - 04
        Judul Program : LIGA BOLA TELKOM
        Mata Kuliah : Struktur Data
    */

using namespace std;

void skor(ListParent &L, club &x, club &y, int &day);
void listTinggiSkor(ListParent L);
int hitungClub(ListParent &L);

#endif // CASEFUNGSILITAS_H_INCLUDED
