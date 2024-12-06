#include <iostream>
using namespace std;

struct Barang
{
    int tanggalMasuk;
    string nama;
    int stok;
    float biayapengiriman;
};

void inputbarang(Barang *&barang, int &jumlahbarangmasuk)
{
    cout << "Masukkan Jumlah Barang Yang Ingin Dimasukkan: ";
    cin >> jumlahbarangmasuk;
    cin.ignore();
    barang = new Barang[jumlahbarangmasuk];

    for (int i = 0; i < jumlahbarangmasuk; i++)
    {
        cout << endl;
        cout << "Data Barang ke-" << (i + 1) << ":" << endl;
        cout << "Masukkan Nama Barang : ";
        getline(cin, barang[i].nama);
        cout << "Masukkan Tanggal Masuk Barang (hh/bb): ";
        cin >> barang[i].tanggalMasuk;
        cin.ignore();
        cout << "Masukkan Jumlah Stok Barang : ";
        cin >> barang[i].stok;
        cin.ignore();
        cout << "Masukkan Biaya Pengiriman : ";
        cin >> barang[i].biayapengiriman;
        cin.ignore();
    }
}

void tampilData(Barang *barang, int jumlahbarangmasuk)
{
    cout << "\nBarang Di Gudang :" << endl;
    for (int i = 0; i < jumlahbarangmasuk; i++)
    {
        cout << "\nBarang ke-" << (i + 1) << ":" << endl;
        cout << "Nama Barang: " << barang[i].nama << endl;
        cout << "Tanggal Masuk Barang : " << barang[i].tanggalMasuk << endl;
        cout << "Jumlah Barang : " << barang[i].stok << endl;
    }
}

void hitungRataPengiriman(Barang *barang, int jumlahbarangmasuk)
{
    if (jumlahbarangmasuk > 0)
    {
        float totalbiaya = 0;
        for (int i = 0; i < jumlahbarangmasuk; i++)
        {
            totalbiaya += barang[i].biayapengiriman;
        }

        float ratapengiriman = totalbiaya / jumlahbarangmasuk;
        cout << "\nRata-rata biaya pengiriman: " << ratapengiriman << endl; 
    }
    else
    {
        cout << "Belum ada data biaya pengiriman untuk dihitung " << endl;
    }
}

int main()
{
    int pilih;
    int jumlahbarangmasuk = 0;
    Barang *barang; 

    do
    {
        cout << "\n===SELAMAT DATANG===" << endl;
        cout << "Silahkan Pilih Menu:" << endl;
        cout << "1. Input Barang " << endl;
        cout << "2. Tampilkan Barang Di Gudang " << endl;
        cout << "3. Hitung Rata-rata Biaya Pengiriman" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih: ";
        cin >> pilih;
        cin.ignore();

        switch (pilih)
        {
        case 1:
            inputbarang(barang, jumlahbarangmasuk);
            break;
        case 2:
            if (jumlahbarangmasuk > 0)
            {
                tampilData(barang, jumlahbarangmasuk);
            }
            else
            {
                cout << "Belum ada data barang yang diinput." << endl; 
            }
            break;
        case 3:
            if (jumlahbarangmasuk > 0)
            {
                hitungRataPengiriman(barang, jumlahbarangmasuk);
            }
            else
            {
                cout << "Belum ada data barang untuk dihitung." << endl;
            }
            break;
        case 4:
            cout << "Terima Kasih" << endl;
            delete[] barang;
            break;
        default:
            cout << "Pilihan tidak valid, silahkan coba lagi." << endl;
            break;
        }
    } while (pilih != 4);
}
