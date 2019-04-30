#include "caseFungsilitas.h"

void runPermainanBola(ListParent L)
{
    if((first(L) != NULL) && (last(L) != NULL)){
        addressParent P = first(L);
        srand(time(0));  // Initialize random number generator.
        while(P != NULL){
            int r = (rand() % 5) + 1;
            info(P).skor_club = info(P).skor_club + r;
            P = next(P);
        }
    }
    else
    {
        cout << "Silahkan inputkan club anda terlebih dahulu, karena data kosong..." << endl;
    }
}
