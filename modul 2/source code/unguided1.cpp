#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan panjang array: ";
    cin >> n;

    int array[n];

    cout << "Masukkan " << n << " angka:\n";
    for (int i = 0; i < n; i++) {
        cout << "Array ke-" << (i + 1) << ": ";
        cin >> array[i];
    }

    cout << "\n";
    cout << "Data ganjil: ";
    for (int i = 0; i < n; i++) {
        if (array[i] % 2 != 0) {
            cout << array[i] << ",";
        }
    }
    cout << endl;

    cout << "\n";
    cout << "Data genap: ";
    for (int i = 0; i < n; i++) {
        if (array[i] % 2 == 0) {
            cout << array[i] << ",";
        }
    }
    cout << endl;

    return 0;
}
