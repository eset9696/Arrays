#pragma once
#include "constants.h"

template <typename T> void ShiftLeft(T array[], const int n, const int shifts);
template <typename T> void ShiftLeft(T array[ROWS][COLS], const int shifts);

template <typename T> void ShiftRight(T array[], const int n, const int shifts);
template <typename T> void ShiftRight(T array[ROWS][COLS], const int shifts);