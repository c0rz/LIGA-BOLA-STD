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

void listTinggiSkor(ListParent L)
{
    if((first(L) != NULL) && (last(L) != NULL))
    {
        addressParent P = first(L);
        do{
                addressParent temp = next(P);
                if(info(P).skor_club <= info(temp).skor_club){
                    lihatClub(info(temp));
                    temp = P;
                }
                 else if(info(P).skor_club >= info(temp).skor_club)
                {
                    lihatClub(info(temp));
                    temp = temp;
                }
                P = next(P);
        }while(next(P) != NULL);
    }
    else
    {
        cout << "Silahkan inputkan club anda terlebih dahulu, karena data kosong..." << endl;
    }
}
