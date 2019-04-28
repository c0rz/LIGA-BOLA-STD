#include "parentData.h"

club create_data_club()
{
    club d;
    cout<<"  ID Club (integer)  : ";
    cin>> d.id_club;
    if(cin.fail())
    {
        cin.clear();
        d.id_club = NULL;
        cout<<"  ID Lagu yang anda inputkan bukan integer. Tekan 'Enter' untuk melanjutkan...";
    }
    else
    {
        cout<<"  Nama Club         : ";
        cin>> d.nama_club;
        d.skor_club = 0;
    }
    return d;
}
