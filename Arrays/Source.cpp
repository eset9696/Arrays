#include "stdafx.h"
#include "constants.h"
#include "stdafx.h"
#include "stdafx.h"
#include "stdafx.h"
#include "stdafx.h"
#include "stdafx.h"
#include "stdafx.h"



template <typename T> void Print(const T array[], const int n);
template <typename T> void Print(const T array[ROWS][COLS]);


void FillRand(int array[], const int n);
void FillRand(double array[], const int n);
void FillRand(char array[], const int n);
void FillRand(int array[ROWS][COLS]);
void FillRand(double array[ROWS][COLS]);
void FillRand(char array[ROWS][COLS]);

template <typename T> T Sum(const T array[], int n);
template <typename T> T Sum(const T array[ROWS][COLS]);

template <typename T> double Avg(const T array[], const int n);
template <typename T> double Avg(const T array[ROWS][COLS]);

template <typename T> T minValueIn(const T array[], const int n);
template <typename T> T minValueIn(const T array[ROWS][COLS]);

template <typename T> T maxValueIn(const T array[], const int n);
template <typename T> T maxValueIn(const T array[ROWS][COLS]);

template <typename T> void ShiftLeft(T array[], const int n, const int shifts);
template <typename T> void ShiftLeft(T array[ROWS][COLS], const int shifts);

template <typename T> void ShiftRight(T array[], const int n, const int shifts);
template <typename T> void ShiftRight(T array[ROWS][COLS], const int shifts);

void UniqueRand(int array[], const int n);
void UniqueRand(double array[], const int n);
void UniqueRand(char array[], const int n);
void UniqueRand(int array[ROWS][COLS]);
void UniqueRand(double array[ROWS][COLS]);
void UniqueRand(char array[ROWS][COLS]);

template <typename T> void Sort(T array[], const int n);
template <typename T> void Sort(T array[ROWS][COLS]);

template <typename T> void Search(const T array[], const int n);
template <typename T> void Search(const T array[ROWS][COLS]);


int main() {
    system("chcp 65001");
    srand(time(0));
    int minValue = 0;
    int maxValue = 10;
    const int n = 10;

    int array1[n];
    FillRand(array1, n);
    Print(array1, n);
    Search(array1, n);
    Sort(array1, n);
    Print(array1, n);
    cout << "Сумма всех элементов массива равна: " << Sum(array1, n) << endl;
    cout << "Среднее арифметическое значение всех элементов массива равно: " << Avg(array1, n) << endl;
    cout << "Минимальное число в массиве равно: " << minValueIn(array1, n) << endl;
    cout << "Максимальное число в массиве равно: " << maxValueIn(array1, n) << endl;
    ShiftRight(array1, n, 2);
    Print(array1, n);
    ShiftLeft(array1, n, 2);
    Print(array1, n);
    UniqueRand(array1, n);
    Print(array1, n);
    Search(array1, n);


    /*int array[ROWS][COLS];
    FillRand(array);
    Print(array);
    Search(array);
    cout << endl;
    Sort(array);
    Print(array);
    cout << "Сумма всех элементов массива равна: " << Sum(array) << endl;
    cout << "Среднее арифметическое значение всех элементов массива равно: " << Avg(array) << endl;
    cout << "Минимальное число в массиве равно: " << minValueIn(array) << endl;
    cout << "Максимальное число в массиве равно: " << maxValueIn(array) << endl;
    ShiftRight(array, 2);
    Print(array);
    cout << endl;
    ShiftLeft(array, 2);
    Print(array);
    cout << endl;
    UniqueRand(array);
    Print(array);*/

    return 0;
}

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
void FillRand(int array[], const int n) {
    for (int i = 0; i < n; ++i) {
        array[i] = rand() % 10;
    }
}
void FillRand(double array[], const int n) {
    for (int i = 0; i < n; ++i) {
        array[i] = rand() % 100;
        array[i] /= 100;
    }
}
void FillRand(char array[], const int n) {
    for (int i = 0; i < n; ++i) {
        array[i] = rand() % 127;
    }
}

void FillRand(int array[ROWS][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            array[i][j] = rand() % 20;
        }
    }
}
void FillRand(double array[ROWS][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            array[i][j] = rand() % 20;
            array[i][j] /= 100;
        }
    }
}
void FillRand(char array[ROWS][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            array[i][j] = rand() % 127;
        }
    }
}
template <typename T> T Sum(const T array[], const int n) {
    T sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += array[i];
    }
    return sum;
}
template <typename T> T Sum(const T array[ROWS][COLS]) {
    T sum = 0;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            sum += array[i][j];
        }
    }
    return sum;
}
template <typename T> double Avg(const T array[], const int n) {
    return (double)Sum(array, n) / n;
}

template <typename T> double Avg(const T array[ROWS][COLS]) {
    return (double)Sum(array) / (ROWS * COLS);
}
template <typename T> T minValueIn(const T array[], const int n) {
    T minValue = array[0];
    for (int i = 1; i < n; ++i) {
        if (minValue > array[i]) {
            minValue = array[i];
        }
    }
    return minValue;
}
template <typename T> T minValueIn(const T array[ROWS][COLS]) {
    T minValue = array[0][0];
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            if (minValue > array[i][j]) {
                minValue = array[i][j];
            }
        }
    }
    return minValue;
}
template <typename T> T maxValueIn(const T array[], const int n) {
    T maxValue = array[0];
    for (int i = 1; i < n; ++i) {
        if (maxValue < array[i]) {
            maxValue = array[i];
        }
    }
    return maxValue;
}
template <typename T> T maxValueIn(const T array[ROWS][COLS]) {
    T maxValue = array[0][0];
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            if (maxValue < array[i][j]) {
                maxValue = array[i][j];
            }
        }
    }
    return maxValue;
}
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
void UniqueRand(int array[], const int n) {
    for (int i = 0; i < n; ++i) {
        bool isMet;
        do {
            isMet = true;
            array[i] = rand() % 10;
            if (i > 0) {
                for (int j = i - 1; j >= 0; --j) {
                    if (array[i] == array[j]) {
                        isMet = false;
                    }
                }
            }
        } while (!isMet);
    }
}
void UniqueRand(double array[], const int n) {
    for (int i = 0; i < n; ++i) {
        bool isMet;
        do {
            isMet = true;
            array[i] = rand() % 100;
            array[i] /= 100;
            if (i > 0) {
                for (int j = i - 1; j >= 0; --j) {
                    if (array[i] == array[j]) {
                        isMet = false;
                    }
                }
            }
        } while (!isMet);
    }
}
void UniqueRand(char array[], const int n) {
    for (int i = 0; i < n; ++i) {
        bool isMet;
        do {
            isMet = true;
            array[i] = rand() % 10;
            if (i > 0) {
                for (int j = i - 1; j >= 0; --j) {
                    if (array[i] == array[j]) {
                        isMet = false;
                    }
                }
            }
        } while (!isMet);
    }
}
void UniqueRand(int array[ROWS][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            bool isMet;
            do {
                isMet = false;
                array[i][j] = rand() % 20;
                for (int k = 0; k <= i; ++k) {
                    for (int l = 0; l < (k == i ? j : COLS); ++l) {
                        if (array[i][j] == array[k][l]) {
                            isMet = true;
                            break;
                        }
                    }
                    if (isMet) {
                        break;
                    }
                }
            } while (isMet);
        }
    }
}
void UniqueRand(double array[ROWS][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            bool isMet;
            do {
                isMet = false;
                array[i][j] = rand() % 20;
                array[i][j] /= 100;
                for (int k = 0; k <= i; ++k) {
                    for (int l = 0; l < (k == i ? j : COLS); ++l) {
                        if (array[i][j] == array[k][l]) {
                            isMet = true;
                            break;
                        }
                    }
                    if (isMet) {
                        break;
                    }
                }
            } while (isMet);
        }
    }
}
void UniqueRand(char array[ROWS][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            bool isMet;
            do {
                isMet = false;
                array[i][j] = rand() % 127;
                for (int k = 0; k <= i; ++k) {
                    for (int l = 0; l < (k == i ? j : COLS); ++l) {
                        if (array[i][j] == array[k][l]) {
                            isMet = true;
                            break;
                        }
                    }
                    if (isMet) {
                        break;
                    }
                }
            } while (isMet);
        }
    }
}
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