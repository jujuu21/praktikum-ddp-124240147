#include <iostream>
using namespace std;

int main(){
    string nama, nim;
    int menu, angka_tebakan ;
    int angka_benar = 5;
    cout<< "SILAHKAN LOGIN TERLEBIH DAHULU"<<endl;
    bool check = false;
    cout << "Silahkan masukkan nama dan nim"<<endl;

    do
    {
        cout << "masukkan nama:";
        cin >> nama;
        cout << "masukkan nim:";
        cin >> nim;

        if (nama == "juju" && nim == "21")
        {   
            check = true;
            cout << "Login Berhasil"<< endl;
        }else{
            cout << "nama atau nim salah";
        }
        
    } while (check == false);

    cout << "MENU"<<endl;
    cout << "1.MAINKAN GAME"<<endl;
    cin >> menu;

    switch (menu)
    {
    case 1: {
        cout << "PERMAINAN TEBAK ANGKA"<<endl;
        cout << "TEBAK ANGKA DARI 1-10"<<endl;
        do
        {
            cout << "Angka Tebakan Anda:";
            cin>> angka_tebakan;
            if ( angka_tebakan > angka_benar ){
                cout << "Angka Terlalu Besar"<<endl;
            }else if ( angka_tebakan < angka_benar){
                cout << "Angka Terlalu Kecil"<<endl;
            }else {
                cout << "Angka Tebakan Benar"<<endl;
                return 0;
            }
            
        } while ( angka_tebakan != angka_benar);
    }

        break;

    }


}