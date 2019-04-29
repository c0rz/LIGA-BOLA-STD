#ifndef PARENTDATA_H_INCLUDED
#define PARENTDATA_H_INCLUDED

#include <iostream>
#include <cstdlib>

using namespace std;

    /*
        Dibuat Oleh : Cornelius Stephanus Alfredo ( 1301180287 )
        Kelas : IF - 42 - 04
        Judul Program : LIGA BOLA TELKOM
        Mata Kuliah : Struktur Data
    */

struct club{
    int id_club;
    string nama_club;
    int skor_club;
};

club create_data_club();
void lihatClub(club c);
void edit_data_club(club &c);

#endif // PARENTDATA_H_INCLUDED
