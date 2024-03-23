#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> NIK;

    NIK[3335340001] = "Didik Sutikno";
    NIK[3932530009] = "Jatmiko Adi";
    NIK[3253300002] = "Joko Widodo";

    cout << "Data Warga Penerima Bantuan 2024: " << endl;
    cout << "1. " << NIK[3335340001] << endl;
    cout << "2. " << NIK[3932530009] << endl;
    cout << "3. " << NIK[3253300002] << endl;
    cout << endl;

    return 0;
}