#include "childData.h"

pemain create_data_pemain()
{
    /*
        Dibuat Oleh : Achmad Alfansyah N ( 1301180006 )
        Kelas : IF - 42 - 04
        Judul Program : LIGA BOLA TELKOM
        Mata Kuliah : Struktur Data
    */
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
    }
    return d;
}

void lihatPemain(pemain p)
{
    /*
        Dibuat Oleh : Achmad Alfansyah N ( 1301180006 )
        Kelas : IF - 42 - 04
        Judul Program : LIGA BOLA TELKOM
        Mata Kuliah : Struktur Data
    */
    cout<<"  ID Club        : " <<p.id_pemain<<endl;
    cout<<"  Nama Pemain  : " <<p.nama_pemain<<endl;
}

void edit_data_pemain(pemain &p){
    /*
        Dibuat Oleh : Achmad Alfansyah N ( 1301180006 )
        Kelas : IF - 42 - 04
        Judul Program : LIGA BOLA TELKOM
        Mata Kuliah : Struktur Data
    */
    cout<<"  ID Pemain (integer)  : ";
    cin>> p.id_pemain;
    if(cin.fail())
    {
        cin.clear();
        p.id_pemain = NULL;
        cout<<"  ID Pemain yang anda inputkan bukan integer. Tekan 'Enter' untuk melanjutkan...";
    }
    else
    {
        cout<<"  Nama Pemain         : ";
        cin.ignore();
        getline(cin, p.nama_pemain);
    }
}
