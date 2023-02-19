#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 5;

void fillArray(int (*arr)[COLS]) {
   int value = 1;
   for (int i = 0; i < ROWS; i++) {
      for (int j = 0; j < COLS; j++) {
         if (j % 2 == 0) {
            *(*(arr + i) + j) = value;
            value++;
         }
      }
   }
}

int main() {
   int arr[ROWS][COLS] = {0};
   fillArray(arr);
   for (int i = 0; i < ROWS; i++) {
      for (int j = 0; j < COLS; j++) {
         cout << arr[i][j] << " ";
      }
      cout << endl;
   }
   return 0;
}
