#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan data array: ";
    cin >> n;

    int array[n];

    // Meminta pengguna untuk memasukkan nilai-nilai array
    cout << "Masukkan " << n << " angka:\n";
    for (int i = 0; i < n; i++) {
        cout << "Array ke-" << (i + 1) << ": ";
        cin >> array[i];
    }

    int pilihan;
    do {
        // Menampilkan menu
        cout << "\nMenu:\n";
        cout << "1. Cari nilai Maksimum\n";
        cout << "2. Cari nilai Minimum\n";
        cout << "3. Cari nilai Rata-rata\n";
        cout << "0. Keluar\n";
        cout << "Pilih: ";
        cin >> pilihan;

        // switch case
        switch (pilihan) {
            case 1: {
                // Mencari nilai maksimum
                int maks = array[0];
                for (int i = 1; i < n; i++) {
                    if (array[i] > maks) {
                        maks = array[i];
                    }
                }
                cout << "Nilai Maksimum: " << maks << endl;
                break;
            }
            case 2: {
                // Mencari nilai minimum
                int min = array[0];
                for (int i = 1; i < n; i++) {
                    if (array[i] < min) {
                        min = array[i];
                    }
                }
                cout << "Nilai Minimum: " << min << endl;
                break;
            }
            case 3: {
                // Menghitung nilai rata-rata
                double total = 0;
                for (int i = 0; i < n; i++) {
                    total += array[i];
                }
                double rata = total / n;
                cout << "Nilai Rata-rata: " << rata << endl;
                break;
            }
            case 0:
                cout << "Program selesai.\n";
                break;
            default:
                cout << "Pilihan tidak valid.\n";
        }
    } while (pilihan != 0);

    return 0;
}
