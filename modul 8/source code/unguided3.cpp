#include <iostream>
using namespace std;

int main()
{
    int data[] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};

    //array dan menghitung jumlah kemunculan angka 4 
    int size = sizeof(data) / sizeof(data[0]); 
    int target = 4;
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (data[i] == target)
        {
            count++;
        }
    }
    cout << "\n";
    cout << "Jumlah angka 4 dalam data: " << count << endl;
    return 0;
}