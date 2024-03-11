#include <iostream>
#include <cmath>

using namespace std;

// Fungsi menghitung luas dan volume persegi panjang
float hitungLuasPersegiPanjang(float panjang, float lebar)
{
    return panjang * lebar;
}
float hitungVolumeBalok(float panjang, float lebar, float tinggi)
{
    return panjang * lebar * tinggi;
}

// Fungsi menghitung luas dan volume lingkaran
float hitungLuasLingkaran(float jari_jari)
{
    return M_PI * pow(jari_jari, 2);
}
float hitungVolumeBola(float jari_jari)
{
    return (4.0 / 3.0) * M_PI * pow(jari_jari, 3);
}

int main()
{
    int pilihan;
    cout << "\n";
    cout << "Pilihan Menu:\n";
    cout << "1. Persegi Panjang (Balok)\n";
    cout << "2. Lingkaran (Bola)\n";
    cout << "Masukkan pilihan Anda: ";
    cin >> pilihan;

    if (pilihan == 1)
    {
        float panjang, lebar, tinggi;
        cout << "\n";
        cout << " ##  PERSEGI PANJANG (BALOK) ## \n";
        cout << "Masukkan panjang persegi panjang: ";
        cin >> panjang;
        cout << "Masukkan lebar persegi panjang: ";
        cin >> lebar;
        cout << "Masukkan tinggi balok (untuk hitung volume): ";
        cin >> tinggi;

        float luas = hitungLuasPersegiPanjang(panjang, lebar);
        float volume = hitungVolumeBalok(panjang, lebar, tinggi);

        cout << "\n";
        cout << " ##  HASIL LUAS & VOLUME  ## \n";
        cout << "Luas persegi panjang = " << luas << endl;
        cout << "Volume balok dengan tinggi " << tinggi << " = " << volume << endl;
    }
    else if (pilihan == 2)
    {
        float jari_jari;
        cout << "\n";
        cout << " ##  LINGKARAN (BOLA) ## \n";
        cout << "Masukkan jari-jari lingkaran: ";
        cin >> jari_jari;

        float luas = hitungLuasLingkaran(jari_jari);
        float volume = hitungVolumeBola(jari_jari);
        cout << "\n";
        cout << " ##  HASIL LUAS & VOLUME ## \n";
        cout << "Luas lingkaran = " << luas << endl;
        cout << "Volume bola = " << volume << endl;
    }
    else
    {
        cout << "Pilihan tidak valid!\n";
    }

    return 0;
}
