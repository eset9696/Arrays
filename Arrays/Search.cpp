#include "stdafx.h"
#include "Search.h"

template <typename T> void Search(const T array[], const int n) {
    for (int i = 0; i < n; ++i) {
        int count = 0;
        bool isMet = false;
        for (int j = 0; j < i; ++j) {
            if (array[i] == array[j]) {
                isMet = true;
            }
            if (isMet) {
                break;
            }
        }
        if (isMet) {
            continue;
        }
        for (int j = i + 1; j < n; ++j) {
            if (array[i] == array[j]) {
                count++;
            }
        }
        if (count > 0) {
            cout << "Число " << array[i] << " повторилось " << count << "раз." << endl;
        }
    }
}

template <typename T> void Search(const T array[ROWS][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            int count = 0;
            bool isMet = false;
            for (int k = 0; k <= i; ++k) {
                for (int l = 0; l < (k == i ? j : COLS); ++l) {
                    if (array[i][j] == array[k][l]) {
                        isMet = true;
                        break;
                    }
                }if (isMet) {
                    break;
                }
            }if (isMet) {
                continue;
            }
            for (int k = i; k < ROWS; ++k) {
                for (int l = (k == i ? j + 1 : 0); l < COLS; ++l) {
                    if (array[i][j] == array[k][l]) {
                        count++;
                    }
                }
            }
            if (count > 0) {
                cout << "Число " << array[i][j] << " повторилось " << count << " раз." << endl;
            }
        }
    }
}