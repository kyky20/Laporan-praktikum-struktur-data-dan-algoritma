#include <iostream>
#include <cstring>
using namespace std;

void selection_sort(char arr[], int n) {
    int i, j, min_idx;
    char temp;
    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i+1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int binary_search(char arr[], int n, char x) {
    int l = 0, r = n - 1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == x) return m;
        if (arr[m] < x) l = m + 1;
        else r = m - 1;
    }
    return -1;
}

int main() {
    string kalimat;
    char cari;
    
    cout << "=============================" << endl;
    cout << "    Program Binary Search    " << endl;
    cout << "=============================" << endl;
    
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);
    
    cout << "Masukkan huruf yang ingin dicari: ";
    cin >> cari;

    string temp;
    for (char c : kalimat) {
        if (!isspace(c)) {
            temp += c;
        }
    }
    
    int n = temp.size();
    char data[n + 1];
    strcpy(data, temp.c_str());
    
    selection_sort(data, n);
    
    cout << "\nHuruf-huruf yang diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
    
    int result = binary_search(data, n, cari);
    
    cout << "\nHasil Pencarian:" << endl;
    cout << "-----------------------------------------------------------------" << endl;
    if (result != -1) {
        cout << "Huruf '" << cari << "' ditemukan pada indeks ke-" << result << " dalam array yang diurutkan." << endl;
    } else {
        cout << "Huruf '" << cari << "' tidak ditemukan dalam kalimat." << endl;
    }
    cout << "-----------------------------------------------------------------" << endl;
    
    return 0;
}
