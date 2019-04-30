#include "parentData.h"

club create_data_club()
{
    /*
        Dibuat Oleh : Cornelius Stephanus Alfredo ( 1301180287 )
        Kelas : IF - 42 - 04
        Judul Program : LIGA BOLA TELKOM
        Mata Kuliah : Struktur Data
    */
    club d;
    cout<<"  ID Club (integer)  : ";
    cin>> d.id_club;
    if(cin.fail())
    {
        cin.clear();
        cout<<"  ID Club yang anda inputkan bukan integer. Tekan 'Enter' untuk melanjutkan...";
    }
    else
    {
        cout<<"  Nama Club         : ";
        cin.ignore();
        getline(cin, d.nama_club);
        d.skor_club = 0;
    }
    return d;
}

void lihatClub(club c)
{
    /*
        Dibuat Oleh : Cornelius Stephanus Alfredo ( 1301180287 )
        Kelas : IF - 42 - 04
        Judul Program : LIGA BOLA TELKOM
        Mata Kuliah : Struktur Data
    */
    cout<<"  ID Club        : " <<c.id_club<<endl;
    cout<<"  Nama Club  : " <<c.nama_club<<endl;
    cout<<"  Point Skor    : " <<c.skor_club<<endl;
}

void edit_data_club(club &c){
    /*
        Dibuat Oleh : Cornelius Stephanus Alfredo ( 1301180287 )
        Kelas : IF - 42 - 04
        Judul Program : LIGA BOLA TELKOM
        Mata Kuliah : Struktur Data
    */
    cout<<"  Nama Club     : ";
    cin.ignore();
    getline(cin, c.nama_club);
}
