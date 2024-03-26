#include <iostream>
using namespace std;

int main()
{
    int x_ANDIKA, y_INDRA, z_PRASTAWA;

    cout << "Masukkan jumlah atau ukuran array dalam dimensi x: ";
    cin >> x_ANDIKA;
    cout << "Masukkan  jumlah atau ukuran array dalam dimensi y: ";
    cin >> y_INDRA;
    cout << "Masukkan  jumlah atau ukuran array dalam dimensi z: ";
    cin >> z_PRASTAWA;

    int arr[x_ANDIKA][y_INDRA][z_PRASTAWA];

    for (int x = 0; x < x_ANDIKA; x++)
    {
        for (int y = 0; y < y_INDRA; y++)
        {
            for (int z = 0; z < z_PRASTAWA; z++)
            {
                cout << "Input Array[" << x << "][" << y << "][" << z << "] = ";
                cin >> arr[x][y][z];
            }
        }
        cout << endl;
    }

    cout << "Data Array:\n";
    for (int x = 0; x < x_ANDIKA; x++)
    {
        for (int y = 0; y < y_INDRA; y++)
        {
            for (int z = 0; z < z_PRASTAWA; z++)
            {
                cout << "Data Array[" << x << "][" << y << "][" << z << "] = " << arr[x][y][z] << endl;
            }
        }
    }

    cout << "Tampilan array:\n";
    for (int x = 0; x < x_ANDIKA; x++)
    {
        for (int y = 0; y < y_INDRA; y++)
        {
            for (int z = 0; z < z_PRASTAWA; z++)
            {
                cout << arr[x][y][z] << ' ';
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}