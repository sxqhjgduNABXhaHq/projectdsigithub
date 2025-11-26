#include <iostream>
using namespace std;

int main() {
    string nama[100];
    string nim[100];
    int jumlah = 0;
    int pilihan;

    do {
        cout << "\n===========================\n";
        cout << "   PROGRAM DATA MAHASISWA\n";
        cout << "===========================\n";
        cout << "1. Tambah Data\n";
        cout << "2. Lihat Data\n";
        cout << "3. Hapus Data\n";
        cout << "4. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        if (pilihan == 1) {
            // Tambah data
            cout << "Masukkan Nama : ";
            cin.ignore();
            getline(cin, nama[jumlah]);

            cout << "Masukkan NIM  : ";
            getline(cin, nim[jumlah]);

            jumlah++;
            cout << "Data berhasil ditambahkan!\n";
        }

        else if (pilihan == 2) {
            // Lihat data
            if (jumlah == 0) {
                cout << "Belum ada data.\n";
            } else {
                cout << "\nDaftar Mahasiswa:\n";
                for (int i = 0; i < jumlah; i++) {
                    cout << i + 1 << ". "
                         << nama[i] << " - " << nim[i] << endl;
                }
            }
        }

        else if (pilihan == 3) {
            // Hapus data
            if (jumlah == 0) {
                cout << "Tidak ada data untuk dihapus.\n";
            } else {
                int hapus;
                cout << "Masukkan nomor data yang ingin dihapus: ";
                cin >> hapus;

                if (hapus < 1 || hapus > jumlah) {
                    cout << "Nomor tidak valid!\n";
                } else {
                    // Geser data ke kiri
                    for (int i = hapus - 1; i < jumlah - 1; i++) {
                        nama[i] = nama[i+1];
                        nim[i] = nim[i+1];
                    }
                    jumlah--;
                    cout << "Data berhasil dihapus.\n";
                }
            }
        }

        else if (pilihan == 4) {
            cout << "Program selesai.\n";
        }

        else {
            cout << "Pilihan tidak valid.\n";
        }

    } while (pilihan != 4);

    return 0;
}
