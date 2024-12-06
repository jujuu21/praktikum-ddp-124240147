#include <iostream>
#include <string>

using namespace std;

int main() {
int jml_salah_login=0;
string username="juan";
string password="147";
string input_username, input_password;
int pilihan;
string cari_barang;
string tgl_barang1,nama_barang1,tgl_barang2,nama_barang2;
int stok_barang1, stok_barang2;


cout << "Masukkan";
cout << "Username : "; cin >> input_username;
cout << "Password : "; cin >> input_password;



if (input_username != username || input_password != password)
{  
      cout << "Username atau Password salah";
      return 0;
}
    // cout << "Berhasil" << endl;
    cout << "menu" << endl;
    cout << "1. barang dan stok" << endl;
    cout << "2. pengecekan barang dan stok" << endl;
    cout << "3. pencarian barang" << endl;
    cout << "Masukkan pilihan Anda:";
    cin >> pilihan;

    switch (pilihan)
    {
    case 1: 
        cout << "barang 1" << endl;
        cout << "tgl barang masuk (hh/bb):"; cin >> tgl_barang1; cout << endl;
        cout << "nama barang :"; cin >> nama_barang1; cout << endl;
        cout << "stok barang masuk :"; cin >> stok_barang1; cout << endl;
        cout << "=====================================" << endl; 
        cout << "barang 2" << endl;
        cout << "tgl barang masuk (hh/bb): :"; cin >> tgl_barang2; cout << endl;
        cout << "nama barang :"; cin >> nama_barang2; cout << endl;
        cout << "stok barang masuk :"; cin >> stok_barang2; cout << endl; 
        break;
    case 2:
        cout << "barang 1" << endl;
        cout << "tgl barang masuk (hh/bb):"<< tgl_barang1; cout << endl;
        cout << "nama barang :"<< nama_barang1; cout << endl;
        cout << "stok barang masuk :" << stok_barang1; cout << endl;
        cout << "=====================================" << endl; 
        cout << "barang 2" << endl;
        cout << "tgl barang masuk (hh/bb):"<< tgl_barang2; cout << endl;
        cout << "nama barang :"<< nama_barang2; cout << endl;
        cout << "stok barang masuk :"<< stok_barang2; cout << endl; 
        break;
    case 3:
        cout << "Masukkan barang yang akan dicari :";  cin >> cari_barang; cout << endl;
        if (cari_barang==nama_barang1){
        cout << "barang 1" << endl;
        cout << "tgl barang masuk (hh/bb):"<< tgl_barang1; cout << endl;
        cout << "nama barang :"<< nama_barang1; cout << endl;
        cout << "stok barang masuk :" << stok_barang1; cout << endl;
        } else if (cari_barang==nama_barang2){
        cout << "barang 2" << endl;
        cout << "tgl barang masuk (hh/bb):"<< tgl_barang2; cout << endl;
        cout << "nama barang :"<< nama_barang2; cout << endl;
        cout << "stok barang masuk :"<< stok_barang2; cout << endl; 
        } else {
        cout << "barang tidak ditemukan" << endl;    
        }
        break;
    default:cout << "pilihan anda tidak diketahui" << endl;
        break;
    }

    // kesempatan kedua
     cout << "menu" << endl;
    cout << "1. barang dan stok" << endl;
    cout << "2. pengecekan barang dan stok" << endl;
    cout << "3. pencarian barang" << endl;
    cout << "Masukkan pilihan Anda:";
    cin >> pilihan;

    switch (pilihan)
    {
    case 1: 
        cout << "barang 1" << endl;
        cout << "tgl barang masuk (hh/bb):"; cin >> tgl_barang1; cout << endl;
        cout << "nama barang :"; cin >> nama_barang1; cout << endl;
        cout << "stok barang masuk :"; cin >> stok_barang1; cout << endl;
        cout << "=====================================" << endl; 
        cout << "barang 2" << endl;
        cout << "tgl barang masuk (hh/bb): :"; cin >> tgl_barang2; cout << endl;
        cout << "nama barang :"; cin >> nama_barang2; cout << endl;
        cout << "stok barang masuk :"; cin >> stok_barang2; cout << endl; 
        break;
    case 2:
        cout << "barang 1" << endl;
        cout << "tgl barang masuk (hh/bb): :"<<tgl_barang1; cout << endl;
        cout << "nama barang :"<<nama_barang1; cout << endl;
        cout << "stok barang masuk :" <<stok_barang1; cout << endl;
        cout << "=====================================" << endl; 
        cout << "barang 2" << endl;
        cout << "tgl barang masuk (hh/bb): :"<< tgl_barang2; cout << endl;
        cout << "nama barang :"<< nama_barang2; cout << endl;
        cout << "stok barang masuk :"<< stok_barang2; cout << endl; 
        break;
    case 3:
        cout << "Masukkan barang yang akan dicari :";  cin >> cari_barang; cout << endl;
        if (cari_barang==nama_barang1){
        cout << "barang 1" << endl;
        cout << "tgl barang masuk (hh/bb): :"<<tgl_barang1; cout << endl;
        cout << "nama barang :"<<nama_barang1; cout << endl;
        cout << "stok barang masuk :" <<stok_barang1; cout << endl;
        } else if (cari_barang==nama_barang2){
        cout << "barang 2" << endl;
        cout << "tgl barang masuk (hh/bb): :"<< tgl_barang2; cout << endl;
        cout << "nama barang :"<< nama_barang2; cout << endl;
        cout << "stok barang masuk :"<< stok_barang2; cout << endl; 
        } else {
        cout << "barang tidak ditemukan" << endl;    
        }
        break;
    default:cout << "pilihan anda tidak diketahui" << endl;
        break;
    }

    // kesempatan ketiga
     cout << "menu" << endl;
    cout << "1. barang dan stok" << endl;
    cout << "2. pengecekan barang dan stok" << endl;
    cout << "3. pencarian barang" << endl;
    cout << "Masukkan pilihan Anda:";
    cin >> pilihan;

    switch (pilihan)
    {
    case 1: 
        cout << "barang 1" << endl;
        cout << "tgl barang masuk (hh/bb):"; cin >>tgl_barang1; cout << endl;
        cout << "nama barang :"; cin >>nama_barang1; cout << endl;
        cout << "stok barang masuk :"; cin >> stok_barang1; cout << endl;
        cout << "=====================================" << endl; 
        cout << "barang 2" << endl;
        cout << "tgl barang masuk (hh/bb):"; cin >> tgl_barang2; cout << endl;
        cout << "nama barang :"; cin >> nama_barang2; cout << endl;
        cout << "stok barang masuk :"; cin >> stok_barang2; cout << endl; 
        break;
    case 2:
        cout << "barang 1" << endl;
        cout << "tgl barang masuk (hh/bb):"<<tgl_barang1; cout << endl;
        cout << "nama barang :"<<nama_barang1; cout << endl;
        cout << "stok barang masuk :" <<stok_barang1; cout << endl;
        cout << "=====================================" << endl; 
        cout << "barang 2" << endl;
        cout << "tgl barang masuk (hh/bb):"<< tgl_barang2; cout << endl;
        cout << "nama barang :"<< nama_barang2; cout << endl;
        cout << "stok barang masuk :"<< stok_barang2; cout << endl; 
        break;
    case 3:
        cout << "Masukkan barang yang akan dicari :";  cin >> cari_barang; cout << endl;
        if (cari_barang==nama_barang1){
        cout << "barang 1" << endl;
        cout << "tgl barang masuk (hh/bb):"<< tgl_barang1; cout << endl;
        cout << "nama barang :"<< nama_barang1; cout << endl;
        cout << "stok barang masuk :" << stok_barang1; cout << endl;
        } else if (cari_barang==nama_barang2){
        cout << "barang 2" << endl;
        cout << "tgl barang masuk (hh/bb):"<< tgl_barang2; cout << endl;
        cout << "nama barang :"<< nama_barang2; cout << endl;
        cout << "stok barang masuk :"<< stok_barang2; cout << endl; 
        } else {
        cout << "barang tidak ditemukan" << endl;    
        }
        break;
    default:cout << "pilihan anda tidak diketahui" << endl;
        break;
    }

    cout <<"kesempatan mengakses menu 3x habis" << endl;





}

