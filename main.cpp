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

    c = create_data_club();

    insertLastClub(listClub, addP);
    printInfoClub(listClub);

    return 0;
}
