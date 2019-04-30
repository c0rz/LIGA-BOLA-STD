#include "caseFungsilitas.h"

void skor(ListParent &L, club &x, club &y, int &day)
{
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
int hitungClub(ListParent &L){
    int i = 0;
    addressParent P = first(L);
    while(P != NULL){
        i++;
        P = next(P);
    }
    return i;
}
void listTinggiSkor(ListParent L)
{
    const int nMax = 100;
    int n = hitungClub(L);
    int ID[nMax];
    string nama[nMax];
    int skor[nMax];
    int temp;
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
        for(int a = n; a>=1; a--){
            cout<<"  ID Club        : " <<ID[a]<<endl;
            cout<<"  Nama Club  : " <<nama[a]<<endl;
            cout<<"  Point Skor    : " <<skor[a]<<endl;
        }
    }
    else
    {
        cout << "Silahkan inputkan club anda terlebih dahulu, karena data kosong..." << endl;
    }
}
