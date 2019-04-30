#ifndef CHILDDATA_H_INCLUDED
#define CHILDDATA_H_INCLUDED

#include <iostream>
#include <cstdlib>

using namespace std;

    /*
        Dibuat Oleh : Cornelius Stephanus Alfredo ( 1301180287 )
        Kelas : IF - 42 - 04
        Judul Program : LIGA BOLA TELKOM
        Mata Kuliah : Struktur Data
    */

struct pemain{
    int id_pemain;
    string nama_pemain;
};

pemain create_data_pemain();
void lihatPemain(pemain p);
void edit_data_pemain(pemain &p);

#endif // CHILDDATA_H_INCLUDED
