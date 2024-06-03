#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int countVowels(string sentence) {
    int count = 0;
    string vowels = "aeiou";
    // Mengubah kalimat menjadi lowercase agar pencarian case insensitive
    transform(sentence.begin(), sentence.end(), sentence.begin(), ::tolower);
    for (char c : sentence) {
        if (vowels.find(c) != string::npos) {
            count++;
        }
    }
    return count;
}

int main() {
    string sentence;

    cout << "===================================" << endl;
    cout << "       Program Penghitung Vokal    " << endl;
    cout << "===================================" << endl;

    cout << "\nMasukkan kalimat: ";
    getline(cin, sentence);

    int vowelCount = countVowels(sentence);

    cout << "\n" << endl;
    cout << "Jumlah Vokal: " << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "kalimat yang dimasukkan memiliki " << vowelCount << " huruf vokal." << endl;
    cout << "-------------------------------------------------" << endl;
    return 0;
}