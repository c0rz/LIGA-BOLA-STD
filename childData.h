#ifndef CHILDDATA_H_INCLUDED
#define CHILDDATA_H_INCLUDED

#include <iostream>
#include <cstdlib>

using namespace std;

struct pemain{
    int id_pemain;
    string nama_pemain;
    int total_gol;
};

pemain create_data_pemain();
void lihatPemain(pemain p);

#endif // CHILDDATA_H_INCLUDED
