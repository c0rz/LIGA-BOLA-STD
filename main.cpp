#include <iostream>
#include "parent.h"
#include "relasiList.h"

using namespace std;

int main()
{
    ListParent listClub;

    club c;

    addressParent addP;

    createListClub(listClub);
    c.id_club = 1;
    c.nama_club = "alfan";
    c.skor_club = 0;
    addP = allocateClub(c);
    insertLastClub(listClub, addP);
    printInfoClub(listClub);

    return 0;
}
