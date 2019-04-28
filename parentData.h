#ifndef PARENTDATA_H_INCLUDED
#define PARENTDATA_H_INCLUDED

#include <iostream>
#include <cstdlib>

using namespace std;

struct club{
    int id_club;
    string nama_club;
    int skor_club;
};

club create_data_club();

#endif // PARENTDATA_H_INCLUDED
