#include <iostream>
#include "parent.h"
#include "relasiList.h"

using namespace std;

int main()
{
    ListParent listClub;
    ListChild listPemain;

    club c;
    pemain p;

    addressParent addP;
    addressChild addC;

    int menu;

    createListClub(listClub);

    while(true)
    {
        cout << "LIGA TELKOM - TUBES STRUKTUR DATA - IF-42-04" << endl;
        cout << "Pembuat Aplikasi : " << endl;
        cout << "   1. Cornelius Stephanus Alfredo (1301180287)" << endl;
        cout << "   2. Achmad Alfansyah N (1301180006)" << endl << endl;
        cout << "Silahkan Pilih Menu Dengan Menginputkan Nomor" << endl;
        cout << "[1.] Input Club" << endl;
        cout << "[2.] Input Pemain" << endl;
        cout << "[3.] Melihat Club" << endl;
        cout << endl;
        cout << "[0.] Keluar Program" << endl;

        cout<<endl;
        cout<<"Pilihan (0-5): ";
        cin>>menu;
        if(cin.fail())
        {
            cin.clear();
            cout<<"Pilihan yang anda inputkan bukan integer. Tekan 'Enter' untuk melanjutkan...";
            cin.sync();
            cin.get();
            system("CLS");
        }
        else
        {
            switch(menu)
            {
            case 0:
                cout<<"Thank You For Used Our Program." << endl;
                return 0;
                break;
            case 1:
                c = create_data_club();
                addP = allocateClub(c);
                insertLastClub(listClub, addP);
                cout<<"Club berhasil diinput! Tekan 'Enter' untuk melanjutkan...";
                cin.sync();
                cin.get();
                system("CLS");
                break;
            case 2:
                p = create_data_pemain();
                addC = allocatePemain(p);
                insertLastPemain(listPemain, addC);
                cout<<"Club berhasil diinput! Tekan 'Enter' untuk melanjutkan...";
                cin.sync();
                cin.get();
                system("CLS");
                break;
            case 3:
                printInfoClub(listClub);
                cout << endl;
                cout<<"Tekan 'Enter' untuk kembali ke menu utama...";
                cin.sync();
                cin.get();
                system("CLS");
                break;
            case 4:
                printInfoPemain(listPemain);
                cout << endl;
                cout<<"Tekan 'Enter' untuk kembali ke menu utama...";
                cin.sync();
                cin.get();
                system("CLS");
                break;
            default:
                cout<<"Pilihan tidak tersedia. Tekan 'Enter' untuk melanjutkan...";
                cin.sync();
                cin.get();
                system("CLS");
                break;
            }
        }
    }
}
