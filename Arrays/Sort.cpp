#include "Sort.h"

template <typename T> void Sort(T array[], const int n) {
    T temp;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - 1; ++j) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
template <typename T> void Sort(T array[ROWS][COLS]) {
    T temp;
    for (int i = 0; i < ROWS * COLS; ++i) {
        for (int j = 0; j < ROWS; ++j) {
            for (int k = 0; k < (j == ROWS - 1 ? COLS - 1 : COLS); ++k) {
                if (array[j][k] > array[j][k + 1]) {
                    temp = array[j][k];
                    array[j][k] = array[j][k + 1];
                    array[j][k + 1] = temp;
                }
            }
        }
    }
}