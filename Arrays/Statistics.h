#pragma once
#include "constants.h"

template <typename T> T Sum(const T array[], int n);
template <typename T> T Sum(const T array[ROWS][COLS]);

template <typename T> double Avg(const T array[], const int n);
template <typename T> double Avg(const T array[ROWS][COLS]);

template <typename T> T minValueIn(const T array[], const int n);
template <typename T> T minValueIn(const T array[ROWS][COLS]);

template <typename T> T maxValueIn(const T array[], const int n);
template <typename T> T maxValueIn(const T array[ROWS][COLS]);