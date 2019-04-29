#include <iostream>
#include "parent.h"
#include "relasiList.h"

using namespace std;

int main()
{
    /*
        Dibuat Oleh : Cornelius Stephanus Alfredo ( 1301180287 )
        Kelas : IF - 42 - 04
        Judul Program : LIGA BOLA TELKOM
        Mata Kuliah : Struktur Data
    */
    ListParent listClub;
    ListChild listPemain;
    ListRelation listRelasi;

    club c;
    pemain p;

    addressParent addP; // ini buat Club
    addressChild addC; // ini buat Pemain
    addressRelation addR; // Relasi

    int menu;

    createListClub(listClub);
    createListPemain(listPemain);
    createListRelation(listRelasi);

    while(true)
    {
        cout << "LIGA TELKOM - TUBES STRUKTUR DATA - IF-42-04" << endl;
        cout << "Pembuat Aplikasi : " << endl;
        cout << "   1. Cornelius Stephanus Alfredo (1301180287)" << endl;
        cout << "   2. Achmad Alfansyah N (1301180006)" << endl << endl;
        cout << "Silahkan Pilih Menu Dengan Menginputkan Nomor" << endl;
        cout << "[1.] Input Club" << endl;
        cout << "[2.] Input Pemain" << endl;
        cout << "[3.] List Club" << endl;
        cout << "[4.] List Pemain" << endl;
        cout << "[5.] Delete Club By ID" << endl;
        cout << "[6.] Delete Pemain By ID" << endl;
        cout << "[7.] Buat Koneksi Pemain dan Club" << endl;
        cout << "[8.] List Pemain dengan Club" << endl;
        cout << "[9.] Edit Club By ID" << endl;
        cout << "[10.] Edit Pemain By ID" << endl;
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
                if((c.id_club != NULL) && (findElmClub(listClub,c) == NULL))
                {
                    addP = allocateClub(c);
                    insertLastClub(listClub, addP);
                    cout<<"  Club berhasil diinput! Tekan 'Enter' untuk melanjutkan...";
                }
                else if(findElmClub(listClub,c) != NULL)
                {
                    cout<<"  ID duplikat! Tekan 'Enter' untuk melanjutkan...";
                }
                cin.sync();
                cin.get();
                system("CLS");
                break;
            case 2:
                p = create_data_pemain();
                if((p.id_pemain != NULL) && (findElmPemain(listPemain,p) == NULL))
                {
                    addC = allocatePemain(p);
                    insertLastPemain(listPemain, addC);
                    cout<<"  Pemain berhasil diinput! Tekan 'Enter' untuk melanjutkan...";
                }
                else if(findElmPemain(listPemain,p) != NULL)
                {
                    cout<<"  ID duplikat! Tekan 'Enter' untuk melanjutkan...";
                }
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
            case 5:
                cout<<"  Masukan ID Club : ";
                cin>>c.id_club;
                addP = findElmClub(listClub,c);
                if(addP == NULL)
                {
                    cout<<"  ID Club tidak ditemukan! Tekan 'Enter' untuk melanjutkan...";
                }
                else
                {
                    deleteByIDClub(listClub,addP);
                    cout<<"  Tim Club '"<<info(addP).nama_club<<"' berhasil dihapus! Tekan 'Enter' untuk melanjutkan...";
                    delete addP;
                }
                cin.sync();
                cin.get();
                system("CLS");
                break;
            case 6:
                cout<<"  Masukan ID Pemain : ";
                cin>>p.id_pemain;
                addC = findElmPemain(listPemain, p);
                if(addC == NULL)
                {
                    cout<<"  ID Pemain tidak ditemukan! Tekan 'Enter' untuk melanjutkan...";
                }
                else
                {
                    deleteByIDPemain(listPemain,addC);
                    cout<<"  Pemain bernama '"<<info(addC).nama_pemain<<"' berhasil dihapus! Tekan 'Enter' untuk melanjutkan...";
                    delete addC;
                }
                cin.sync();
                cin.get();
                system("CLS");
                break;
            case 7:
                cout<<"  Masukan ID Club  : ";
                cin>>c.id_club;
                cout<<"  Input ID Pemain : ";
                cin>>p.id_pemain;
                addP = findElmClub(listClub, c);
                addC = findElmPemain(listPemain, p);
                if((addC != NULL) && (addP != NULL))
                {
                    addR = findRelation(listRelasi,addP,addC);
                    if(addR == NULL)
                    {
                        addR = allocateRelation(addP,addC);
                        insertRelation(listRelasi, addR);
                    }
                    cout<<"  Pemain '"<<info(addC).nama_pemain<<"' telah terelasi dengan Club '"<<info(addP).nama_club<<"'.";
                    cout<< endl << "  Tekan 'Enter' untuk kembali ke menu utama...";
                    cin.sync();
                    cin.get();
                    system("CLS");
                }
                else if((addC == NULL) && (addP == NULL))
                {
                    cout<<"  ID Club dan ID Pemain tidak ditemukan!";
                    cout<< endl << "  Tekan 'Enter' untuk kembali ke menu utama...";
                    cin.sync();
                    cin.get();
                    system("CLS");
                }
                else if(addC == NULL)
                {
                    cout<<"  ID Pemain tidak ditemukan!";
                    cout<< endl << "  Tekan 'Enter' untuk kembali ke menu utama...";
                    cin.sync();
                    cin.get();
                    system("CLS");
                }
                else if(addP == NULL)
                {
                    cout<<"  ID Club tidak ditemukan!";
                    cout<< endl << "  Tekan 'Enter' untuk kembali ke menu utama...";
                    cin.sync();
                    cin.get();
                    system("CLS");
                }
                break;
            case 8:
                cout<<endl;
                cout<<"  ----------  List Pemain dengan Club  ----------"<<endl;
                printClubdanPemain(listClub, listRelasi);
                cout<<"  Tekan 'Enter' untuk melanjutkan...";
                cin.sync();
                cin.get();
                system("CLS");
                break;
            case 9:
                cout<<"  Input ID Club  : ";
                cin>>c.id_club;
                addP = findElmClub(listClub,c);
                if(addP == NULL)
                {
                    cout<<"  ID tidak ditemukan! Tekan 'Enter' untuk kembali ke menu utama...";
                }
                else
                {
                    c = info(addP);
                    edit_data_club(info(addP));
                    cout<<"  Club berhasil diganti menjadi '"<<info(addP).nama_club<<"' ! Tekan 'Enter' untuk kembali ke menu utama...";
                }
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
