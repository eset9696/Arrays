#include "stdafx.h"
#include "constants.h"
#include "Print.cpp"
#include "FillRand.h"
#include "Statistics.cpp"
#include "Shifts.cpp"
#include "Search.cpp"
#include "Sort.cpp"

int main() {
    setlocale(LC_ALL, "");
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







