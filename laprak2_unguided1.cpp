#include <iostream>

using namespace std;

int main() {
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  cout << "Data Array : 1 2 3 4 5 6 7 8 9 10 " << endl;

  //bilangan ganjil
  cout << "Bilangan ganjil : ";
  for (int i = 0; i < 10; i++) {
    if (arr[i] % 2 == 0) {
      cout << arr[i] << ", ";
    }
  }

  //bilangan genap
  cout << "\nBilangan genap : ";
  for (int i = 0; i < 10; i++) {
    if (arr[i] % 2 == 1) {
      cout << arr[i] << ", ";
    }
  }

  cout << endl;

  return 0;
}