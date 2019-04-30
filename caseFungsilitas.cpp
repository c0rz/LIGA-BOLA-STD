#include "caseFungsilitas.h"

void skor(ListParent &L, club &x, club &y, int &day)
{
    /*
        Dibuat Oleh : Cornelius Stephanus Alfredo ( 1301180287 )
        Kelas : IF - 42 - 04
        Judul Program : LIGA BOLA TELKOM
        Mata Kuliah : Struktur Data
    */
    addressParent P = findElmClub(L, x);
    addressParent Q = findElmClub(L, y);
    if(P != NULL && Q != NULL)
    {
        srand(time(0));
        int i = rand()%6;
        info(P).skor_club = info(P).skor_club + i;
        int j = rand()%7;
        info(Q).skor_club = info(Q).skor_club + j;
        day++;
        cout << "Hasil Akhir Permainan : " << endl;
        cout << "Tim '"<<info(P).nama_club<<"' : " << i << endl;
        cout << "Tim '"<<info(Q).nama_club<<"' : " << j << endl;
    }
    else
    {
        cout << "ID Team tidak ditemukan silahkan masukkan ID ulang..." << endl;
    }
}

void listTinggiSkor(ListParent L)
{
    /*
        Dibuat Oleh : Achmad Alfansyah N ( 1301180006 )
        Kelas : IF - 42 - 04
        Judul Program : LIGA BOLA TELKOM
        Mata Kuliah : Struktur Data
    */
    const int nMax = 100;
    int n = hitungClub(L);
    int ID[nMax];
    string nama[nMax];
    int skor[nMax];
    if((first(L) != NULL) && (last(L) != NULL))
    {
        addressParent P = first(L);
        int k = 1;
        while(P != NULL){
            ID[k] = info(P).id_club;
            nama[k] = info(P).nama_club;
            skor[k] = info(P).skor_club;
            k++;
            P = next(P);
        }
        int tmp;
        for(int a = n-1; a>=1; a--){
            for(int b = 1; b<=a; b++){
                if(skor[b] > skor[b+1]){
                    tmp = skor[b+1];
                    skor[b+1]= skor[b];
                    skor[b] = tmp;
                }
            }
        }
            cout<<"========================================="<<endl;
            cout<<"          LIST KLASMEN SAAT INI          "<<endl;
            cout<<"========================================="<<endl;
        for(int a = n; a>=1; a--){
            cout<<"  ID Club        : " <<ID[a]<<endl;
            cout<<"  Nama Club  : " <<nama[a]<<endl;
            cout<<"  Point Skor    : " <<skor[a]<<endl;
            cout<<"========================================="<<endl;
        }
    }
    else
    {
        cout << "Silahkan inputkan club anda terlebih dahulu, karena data kosong..." << endl;
    }
}

int hitungClub(ListParent &L){
    /*
        Dibuat Oleh : Achmad Alfansyah N ( 1301180006 )
        Kelas : IF - 42 - 04
        Judul Program : LIGA BOLA TELKOM
        Mata Kuliah : Struktur Data
    */
    int i = 0;
    addressParent P = first(L);
    while(P != NULL){
        i++;
        P = next(P);
    }
    return i;
}
