#include "childData.h"

pemain create_data_pemain()
{
    pemain d;
    cout<<"  ID Pemain (integer)  : ";
    cin>> d.id_pemain;
    if(cin.fail())
    {
        cin.clear();
        d.id_pemain = NULL;
        cout<<"  ID Pemain yang anda inputkan bukan integer. Tekan 'Enter' untuk melanjutkan...";
    }
    else
    {
        cout<<"  Nama Pemain         : ";
        cin.ignore();
        getline(cin, d.nama_pemain);
        d.total_gol = 0;
    }
    return d;
}

void lihatPemain(pemain p)
{
    cout<<"  ID Club        : " <<p.id_pemain<<endl;
    cout<<"  Nama Pemain  : " <<p.nama_pemain<<endl;
    cout<<"  Cetak Gol    : " <<p.total_gol<<endl;
}
