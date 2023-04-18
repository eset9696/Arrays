#include "Shifts.h"

template <typename T> void ShiftLeft(T array[], const int n, const int shifts) {
    T temp;
    for (int i = 0; i < shifts; ++i) {
        temp = array[0];
        for (int j = 0; j < n - 1; ++j) {
            array[j] = array[j + 1];
        }
        array[n - 1] = temp;
    }
}
template <typename T> void ShiftLeft(T array[ROWS][COLS], const int shifts) {
    T temp;
    for (int i = 0; i < shifts; ++i) {
        temp = array[0][0];
        for (int j = 0; j < ROWS; ++j) {
            for (int k = 0; k < COLS; ++k) {
                if (k == COLS - 1 && j != ROWS - 1) {
                    array[j][k] = array[j + 1][0];
                }
                else {
                    array[j][k] = array[j][k + 1];
                }
            }
        }
        array[ROWS - 1][COLS - 1] = temp;
    }
}
template <typename T> void ShiftRight(T array[], const int n, const int shifts) {
    T temp;
    for (int i = 0; i < shifts; ++i) {
        temp = array[n - 1];
        for (int j = n - 1; j >= 0; --j) {
            array[j] = array[j - 1];
        }
        array[0] = temp;
    }
}
template <typename T> void ShiftRight(T array[ROWS][COLS], const int shifts) {
    T temp;
    for (int i = 0; i < shifts; ++i) {
        temp = array[ROWS - 1][COLS - 1];
        for (int j = ROWS - 1; j >= 0; --j) {
            for (int k = COLS - 1; k >= 0; --k) {
                if (k == 0 && j != 0) {
                    array[j][k] = array[j - 1][COLS - 1];
                }
                else {
                    array[j][k] = array[j][k - 1];
                }
            }
        }
        array[0][0] = temp;
    }
}