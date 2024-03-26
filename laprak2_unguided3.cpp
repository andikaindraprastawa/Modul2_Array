#include <iostream>
using namespace std;

int main() {
    int panjang_andika_indra_prastawa, i = 0;
    double total_andika_indra_prastawa = 0;
    cout << "Masukkan panjang array: ";
    cin >> panjang_andika_indra_prastawa;
    
    int array[panjang_andika_indra_prastawa];
    
    cout << "Masukkan " << panjang_andika_indra_prastawa << " angka\n";
    
    // Memasukkan elemen array
    for (i = 0; i < panjang_andika_indra_prastawa; i++) {
        cout << "Array ke-" << (i + 1) << ": ";
        cin >> array[i];
        total_andika_indra_prastawa += array[i]; 
    }
    
    // Mencari nilai maksimum
    int maks = array[0];
    int lokasi_max = 0;
    for (i = 1; i < panjang_andika_indra_prastawa; i++) {
        if (array[i] > maks) {
            maks = array[i];
            lokasi_max = i;
        }
    }
    
    // Mencari nilai minimum
    int min = array[0];
    int lokasi_min = 0;
    for (i = 1; i < panjang_andika_indra_prastawa; i++) {
        if (array[i] < min) {
            min = array[i];
            lokasi_min = i;
        }
    }
    
    // Menghitung rata-rata
    double rata_rata = total_andika_indra_prastawa / panjang_andika_indra_prastawa;
    
    // Output hasil
    cout << "Nilai maksimum adalah "    << maks << " berada di Array ke-" << (lokasi_max + 1) << endl;
    cout << "Nilai minimum adalah "     << min << " berada di Array ke-" << (lokasi_min + 1) << endl;
    cout << "Nilai rata-rata adalah : " << rata_rata << endl;

    return 0;
}