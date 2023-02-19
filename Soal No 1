#include <iostream>
using namespace std;

int main()
{
    int A[3][5] = {
        {10, 20, 30, 40, 50},
        {60, 70, 80, 90, 100},
        {50, 40, 30, 20, 10}
    };
    
    // Cari nilai terbesar
    int max = A[0][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (A[i][j] > max) {
                max = A[i][j];
            }
        }
    }
    cout << "Nilai terbesar adalah " << max << endl;

    // Cari nilai terbesar dan jumlahnya
    int count = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (A[i][j] == max) {
                count++;
            }
        }
    }
    cout << "Jumlah nilai terbesar adalah " << count << endl;

    // Cari apakah ada nilai 50
    bool found = false;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (A[i][j] == 50) {
                found = true;
                break;
            }
        }
        if (found) {
            break;
        }
    }
    if (found) {
        cout << "ADA" << endl;
    } else {
        cout << "TIDAK ADA" << endl;
    }

    return 0;
}
