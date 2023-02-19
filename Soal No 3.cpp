#include <iostream>
using namespace std;

// Fungsi untuk menghitung total secara tidak rekursif
int hitungTotal(int n) {
  int total = 0;
  for (int i = 1; i <= n; i++) {
    if (i % 2 != 0) { // hanya menjumlahkan bilangan ganjil
      total += i;
    }
  }
  return total;
}

// Fungsi untuk menghitung total secara rekursif
int hitungTotalRekursif(int n) {
  if (n == 1) {
    return 1;
  } else {
    int current_value = n % 2 != 0 ? n : 0; // hanya menjumlahkan bilangan ganjil
    return current_value + hitungTotalRekursif(n - 1);
  }
}

int main() {
  int n;
  cout << "Masukkan sebuah nilai integer lebih besar dari 10: ";
  cin >> n;

  // Hitung total dengan fungsi tidak rekursif
  int total = hitungTotal(n);
  cout << "Total dari bilangan ganjil dari 1 sampai " << n << " adalah " << total << endl;

  // Hitung total dengan fungsi rekursif
  int totalRekursif = hitungTotalRekursif(n);
  cout << "Total dari bilangan ganjil dari 1 sampai " << n << " secara rekursif adalah " << totalRekursif << endl;

  return 0;
}
