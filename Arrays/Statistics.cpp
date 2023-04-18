#include "Statistics.h"

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