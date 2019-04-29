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
    cout<<"  ID Club        : " <<c.id_club<<endl;
    cout<<"  Nama Club  : " <<c.nama_club<<endl;
    cout<<"  Point Skor    : " <<c.skor_club<<endl;
}

void edit_data_club(club &c){
    cout<<"  Nama Club     : ";
    cin.ignore();
    getline(cin, c.nama_club);
}
