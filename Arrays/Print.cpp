#include "Print.h"


template <typename T> void Print(const T array[], const int n) {
    for (int i = 0; i < n; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}
template <typename T> void Print(const T array[ROWS][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}