#include <iostream>
using namespace std;

int main() {
    char golongan;
    int jamLembur;
    double tarif, totalGajiKotor, potonganPajak, totalGajiBersih;

    // Input golongan dan jam lembur
    cout << "Masukkan Golongan Karyawan (A/B/C): ";
    cin >> golongan;
    cout << "Masukkan Jam Lembur: ";
    cin >> jamLembur;

    // Set tarif berdasarkan golongan
    switch (golongan) {
        case 'A':
            tarif = 15000;
            break;
        case 'a':
            tarif = 15000;
            break;
        case 'B':
            tarif = 20000;
            break;
        case 'b':
            tarif = 20000;
            break;
        case 'C':
            tarif = 30000;
            break;
        case 'c':
            tarif = 30000;
            break;
        default:
            cout << "Golongan tidak valid!" << endl;
            return 1; // Keluar dari program
    }

    // Hitung total gaji kotor
    if (jamLembur <= 5) {
        totalGajiKotor = jamLembur * tarif;
    } else {
        totalGajiKotor = (5 * tarif) + ((jamLembur - 5) * tarif * 1.5);
    }

    // Hitung potongan pajak jika diperlukan
    if (totalGajiKotor >= 200000) {
        potonganPajak = totalGajiKotor * 0.05; // Pajak 5%
    } else {
        potonganPajak = 0;
    }

    // Hitung total gaji bersih
    totalGajiBersih = totalGajiKotor - potonganPajak;

    // Tampilkan hasil
    cout << "Total Gaji Lembur Kotor: Rp " << totalGajiKotor << endl;
    cout << "Besar Potongan Pajak: Rp " << potonganPajak << endl;
    cout << "Total Gaji Lembur Bersih: Rp " << totalGajiBersih << endl;

    return 0;
}