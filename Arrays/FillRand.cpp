#include "stdafx.h"
#include "constants.h"

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