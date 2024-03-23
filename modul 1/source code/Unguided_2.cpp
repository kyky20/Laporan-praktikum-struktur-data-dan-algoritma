#include <iostream>
using namespace std;

// struct
struct MahasiswaStruct
{
    string nama;
    int umur;
};

// class
class MahasiswaClass
{
private:
    string nama;
    int umur;

public:
    MahasiswaClass(string n, int u)
    {
        nama = n;
        umur = u;
    }

    void tampilkanData()
    {
        cout << "## MENGGUNAKAN CLASS ##\n";
        cout << "Nama : " << nama << endl;
        cout << "Umur : " << umur << endl;
    }
};

int main()
{
    // struct
    MahasiswaStruct mhsStruct;
    mhsStruct.nama = "Jono";
    mhsStruct.umur = 20;

    cout << "## MENGGUNAKAN STRUCT ##\n";
    cout << "Nama : " << mhsStruct.nama << endl;
    cout << "Umur : " << mhsStruct.umur << endl;

    cout << endl;

    // class
    MahasiswaClass mhsClass("Ali", 22);
    mhsClass.tampilkanData();

    return 0;
}
