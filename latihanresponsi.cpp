#include <iostream>
#include <string>

using namespace std;

const int MAX_BUKU = 100;

struct Penulis {
    string namaPenulis;
};

struct Buku {
    int idBuku;
    string judulBuku;
    Penulis penulis;
    int harga;
};

Buku daftarBuku[MAX_BUKU];
int jumlahBuku = 0;

void tambahBuku();
void tampilkanDaftarBuku();
void ubahDataBuku();
void hapusBuku();
void hitungTotalHargaPembelian();

int main() {
    int pilihan;

    do {
        cout << "\nMenu:\n";
        cout << "1. Tambah Buku\n";
        cout << "2. Tampilkan Daftar Buku\n";
        cout << "3. Ubah Data Buku\n";
        cout << "4. Hapus Buku\n";
        cout << "5. Hitung Total Harga Pembelian\n";
        cout << "0. Keluar\n";
        cout << "Pilih: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                tambahBuku();
                break;
            case 2:
                tampilkanDaftarBuku();
                break;
            case 3:
                ubahDataBuku();
                break;
            case 4:
                hapusBuku();
                break;
            case 5:
                hitungTotalHargaPembelian();
                break;
            case 0:
                cout << "Terima kasih telah menggunakan program ini!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
        }
    } while (pilihan != 0);

    return 0;
}

void tambahBuku() {
    int jumlah;
    cout << "Masukkan jumlah buku yang ingin ditambahkan: ";
    cin >> jumlah;

    for (int i = 0; i < jumlah; i++) {
        if (jumlahBuku >= MAX_BUKU) {
            cout << "Kapasitas maksimum buku tercapai." << endl;
            break;
        }
        cout << "ID Buku: ";
        cin >> daftarBuku[jumlahBuku].idBuku;
        cout << "Judul Buku: ";
        cin.ignore();
        getline(cin, daftarBuku[jumlahBuku].judulBuku);
        cout << "Nama Penulis: ";
        getline(cin, daftarBuku[jumlahBuku].penulis.namaPenulis);
        cout << "Harga: ";
        cin >> daftarBuku[jumlahBuku].harga;

        jumlahBuku++;
    }
}

void tampilkanDaftarBuku() {
    for (int i = 0; i < jumlahBuku; i++) {
        cout << "ID: " << daftarBuku[i].idBuku << ", Judul: " << daftarBuku[i].judulBuku 
             << ", Penulis: " << daftarBuku[i].penulis.namaPenulis << ", Harga: " << daftarBuku[i].harga << endl;
    }
}

void ubahDataBuku() {
    int id;
    cout << "Masukkan ID buku yang ingin diubah: ";
    cin >> id;

    int indeks = -1;
    for (int i = 0; i < jumlahBuku; i++) {
        if (daftarBuku[i].idBuku == id) {
            indeks = i;
            break;
        }
    }

    if (indeks != -1) {
        cout << "Judul Buku baru: ";
        cin.ignore();
        getline(cin, daftarBuku[indeks].judulBuku);
        cout << "Nama Penulis baru: ";
        getline(cin, daftarBuku[indeks].penulis.namaPenulis);
        cout << "Harga baru: ";
        cin >> daftarBuku[indeks].harga;
    } else {
        cout << "Buku dengan ID " << id << " tidak ditemukan." << endl;
    }
}

void hapusBuku() {
    int id;
    cout << "Masukkan ID buku yang ingin dihapus: ";
    cin >> id;

    int indeks = -1;
    for (int i = 0; i < jumlahBuku; i++) {
        if (daftarBuku[i].idBuku == id) {
            indeks = i;
            break;
        }
    }

    if (indeks != -1) {
        for (int i = indeks; i < jumlahBuku - 1; i++) {
            daftarBuku[i] = daftarBuku[i + 1];
        }
        jumlahBuku--;
    } else {
        cout << "Buku dengan ID " << id << " tidak ditemukan." << endl;
    }
}

void hitungTotalHargaPembelian() {
    int id;
    int totalHarga = 0;
    string kodeVoucher;
    Buku bukuBeli[MAX_BUKU];
    int jumlahBukuBeli = 0;

    cout << "Masukkan ID buku yang ingin dibeli (masukkan 0 untuk selesai):" << endl;
    while (true) {
        cin >> id;
        if (id == 0) break;

        for (int i = 0; i < jumlahBuku; i++) {
            if (daftarBuku[i].idBuku == id) {
                bukuBeli[jumlahBukuBeli++] = daftarBuku[i];
                break;
            }
        }
    }

    for (int i = 0; i < jumlahBukuBeli; i++) {
        totalHarga += bukuBeli[i].harga;
    }

    bool diskonPenulis = false;
    for (int i = 0; i < jumlahBukuBeli - 1; i++) {
        for (int j = i + 1; j < jumlahBukuBeli; j++) {
            if (bukuBeli[i].penulis.namaPenulis == bukuBeli[j].penulis.namaPenulis) {
                diskonPenulis = true;
                break;
            }
        }
        if (diskonPenulis) break;
    }

    if (diskonPenulis) {
        totalHarga *= 0.95;
    }

    cout << "Masukkan kode voucher (jika ada): ";
    cin >> kodeVoucher;
    if (kodeVoucher == "JPYUM") {
        totalHarga *= 0.90;
    }

    cout << "Total harga setelah diskon: " << totalHarga << endl;
}
