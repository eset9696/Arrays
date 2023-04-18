#include <iostream>
#include <ctime>

using namespace std;

const int ROWS = 4;
const int COLS = 5;

void Print(int array[], int n);
void Print(double array[], int n);
void Print(char array[], int n);
void Print(int array[ROWS][COLS]);
void Print(double array[ROWS][COLS]);
void Print(char array[ROWS][COLS]);


void FillRand(int array[], int n);
void FillRand(double array[], int n);
void FillRand(char array[], int n);
void FillRand(int array[ROWS][COLS]);
void FillRand(double array[ROWS][COLS]);
void FillRand(char array[ROWS][COLS]);

int Sum(int array[], int n);
double Sum(double array[], int n);
int Sum(char array[], int n);
int Sum(int array[ROWS][COLS]);
double Sum(double array[ROWS][COLS]);
int Sum(char array[ROWS][COLS]);

double Avg(int array[], int n);
double Avg(double array[], int n);
double Avg(char array[], int n);
double Avg(int array[ROWS][COLS]);
double Avg(double array[ROWS][COLS]);
double Avg(char array[ROWS][COLS]);

int minValueIn(int array[], int n);
double minValueIn(double array[], int n);
int minValueIn(char array[], int n);
int minValueIn(int array[ROWS][COLS]);
double minValueIn(double array[ROWS][COLS]);
int minValueIn(char array[ROWS][COLS]);

int maxValueIn(int array[], int n);
double maxValueIn(double array[], int n);
int maxValueIn(char array[], int n);
int maxValueIn(int array[ROWS][COLS]);
double maxValueIn(double array[ROWS][COLS]);
int maxValueIn(char array[ROWS][COLS]);

void ShiftLeft(int array[], int n, int shifts);
void ShiftLeft(double array[], int n, int shifts);
void ShiftLeft(char array[], int n, int shifts);
void ShiftLeft(int array[ROWS][COLS], int shifts);
void ShiftLeft(double array[ROWS][COLS], int shifts);
void ShiftLeft(char array[ROWS][COLS], int shifts);

void ShiftRight(int array[], int n, int shifts);
void ShiftRight(double array[], int n, int shifts);
void ShiftRight(char array[], int n, int shifts);
void ShiftRight(int array[ROWS][COLS], int shifts);
void ShiftRight(double array[ROWS][COLS], int shifts);
void ShiftRight(char array[ROWS][COLS], int shifts);

void UniqueRand(int array[], int n);
void UniqueRand(double array[], int n);
void UniqueRand(char array[], int n);
void UniqueRand(int array[ROWS][COLS]);
void UniqueRand(double array[ROWS][COLS]);
void UniqueRand(char array[ROWS][COLS]);

void Sort(int array[], int n);
void Sort(double array[], int n);
void Sort(char array[], int n);
void Sort(int array[ROWS][COLS]);
void Sort(double array[ROWS][COLS]);
void Sort(char array[ROWS][COLS]);

void Search(int array[], int n);
void Search(double array[], int n);
void Search(char array[], int n);
void Search(int array[ROWS][COLS]);
void Search(double array[ROWS][COLS]);
void Search(char array[ROWS][COLS]);


int main() {
    setlocale(LC_ALL, "rus");
    srand(time(0));
    int minValue = 0;
    int maxValue = 10;
    const int n = 10;

    /*char array1[n];
    FillRand(array1, n);
    Print(array1, n);
    Search(array1, n);
    Sort(array1, n);
    Print(array1, n);
    cout << "Сумма всех элементов массива равна: " << Sum(array1, n) << endl;
    cout << "Среднее арифметическое значение всех элементов массива равно: " << Avg(array1, n) << endl;
    cout << "Минимальное число в массиве равно: " << (int) minValueIn(array1, n) << endl;
    cout << "Максимальное число в массиве равно: " << (int) maxValueIn(array1, n) << endl;
    ShiftRight(array1, n, 2);
    Print(array1, n);
    ShiftLeft(array1, n, 2);
    Print(array1, n);
    UniqueRand(array1, n);
    Print(array1, n);
    Search(array1, n);*/


    char array[ROWS][COLS];
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
    Print(array);

    return 0;
}

void Print(int array[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}
void Print(double array[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}
void Print(char array[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << (int)array[i] << " ";
    }
    cout << endl;
}
void Print(int array[ROWS][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}
void Print(double array[ROWS][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}
void Print(char array[ROWS][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << (int)array[i][j] << " ";
        }
        cout << endl;
    }
}
void FillRand(int array[], int n) {
    for (int i = 0; i < n; ++i) {
        array[i] = rand() % 10;
    }
}
void FillRand(double array[], int n) {
    for (int i = 0; i < n; ++i) {
        array[i] = (double)rand() / 1000;
    }
}
void FillRand(char array[], int n) {
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
            array[i][j] = (double)rand() / 1000;
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
int Sum(int array[], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += array[i];
    }
    return sum;
}
double Sum(double array[], int n) {
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += array[i];
    }
    return sum;
}
int Sum(char array[], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += array[i];
    }
    return sum;
}
int Sum(int array[ROWS][COLS]) {
    int sum = 0;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            sum += array[i][j];
        }
    }
    return sum;
}
double Sum(double array[ROWS][COLS]) {
    double sum = 0;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            sum += array[i][j];
        }
    }
    return sum;
}
int Sum(char array[ROWS][COLS]) {
    int sum = 0;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            sum += array[i][j];
        }
    }
    return sum;
}

double Avg(int array[], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += array[i];
    }
    return (double)sum / n;
}
double Avg(double array[], int n) {
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += array[i];
    }
    return (double)sum / n;
}
double Avg(char array[], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += array[i];
    }
    return (double)sum / n;
}
double Avg(int array[ROWS][COLS]) {
    int sum = 0;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            sum += array[i][j];
        }
    }
    return (double)sum / (ROWS * COLS);
}
double Avg(double array[ROWS][COLS]) {
    double sum = 0;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            sum += array[i][j];
        }
    }
    return (double)sum / (ROWS * COLS);
}
double Avg(char array[ROWS][COLS]) {
    int sum = 0;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            sum += array[i][j];
        }
    }
    return (double)sum / (ROWS * COLS);
}
int minValueIn(int array[], int n) {
    int minValue = array[0];
    for (int i = 1; i < n; ++i) {
        if (minValue > array[i]) {
            minValue = array[i];
        }
    }
    return minValue;
}
double minValueIn(double array[], int n) {
    double minValue = array[0];
    for (int i = 1; i < n; ++i) {
        if (minValue > array[i]) {
            minValue = array[i];
        }
    }
    return minValue;
}
int minValueIn(char array[], int n) {
    char minValue = array[0];
    for (int i = 1; i < n; ++i) {
        if (minValue > array[i]) {
            minValue = array[i];
        }
    }
    return (int)minValue;
}
int minValueIn(int array[ROWS][COLS]) {
    int minValue = array[0][0];
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            if (minValue > array[i][j]) {
                minValue = array[i][j];
            }
        }
    }
    return minValue;
}
double minValueIn(double array[ROWS][COLS]) {
    double minValue = array[0][0];
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            if (minValue > array[i][j]) {
                minValue = array[i][j];
            }
        }
    }
    return minValue;
}
int minValueIn(char array[ROWS][COLS]) {
    char minValue = array[0][0];
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            if (minValue > array[i][j]) {
                minValue = array[i][j];
            }
        }
    }
    return (int)minValue;
}

int maxValueIn(int array[], int n) {
    int maxValue = array[0];
    for (int i = 1; i < n; ++i) {
        if (maxValue < array[i]) {
            maxValue = array[i];
        }
    }
    return maxValue;
}
double maxValueIn(double array[], int n) {
    double maxValue = array[0];
    for (int i = 1; i < n; ++i) {
        if (maxValue < array[i]) {
            maxValue = array[i];
        }
    }
    return maxValue;
}
int maxValueIn(char array[], int n) {
    char maxValue = array[0];
    for (int i = 1; i < n; ++i) {
        if (maxValue < array[i]) {
            maxValue = array[i];
        }
    }
    return (int)maxValue;
}
int maxValueIn(int array[ROWS][COLS]) {
    int maxValue = array[0][0];
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            if (maxValue < array[i][j]) {
                maxValue = array[i][j];
            }
        }
    }
    return maxValue;
}
double maxValueIn(double array[ROWS][COLS]) {
    double maxValue = array[0][0];
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            if (maxValue < array[i][j]) {
                maxValue = array[i][j];
            }
        }
    }
    return maxValue;
}
int maxValueIn(char array[ROWS][COLS]) {
    char maxValue = array[0][0];
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            if (maxValue < array[i][j]) {
                maxValue = array[i][j];
            }
        }
    }
    return (int)maxValue;
}

void ShiftLeft(int array[], int n, int shifts) {
    int temp;
    for (int i = 0; i < shifts; ++i) {
        temp = array[0];
        for (int j = 0; j < n - 1; ++j) {
            array[j] = array[j + 1];
        }
        array[n - 1] = temp;
    }
}
void ShiftLeft(double array[], int n, int shifts) {
    double temp;
    for (int i = 0; i < shifts; ++i) {
        temp = array[0];
        for (int j = 0; j < n - 1; ++j) {
            array[j] = array[j + 1];
        }
        array[n - 1] = temp;
    }
}
void ShiftLeft(char array[], int n, int shifts) {
    char temp;
    for (int i = 0; i < shifts; ++i) {
        temp = array[0];
        for (int j = 0; j < n - 1; ++j) {
            array[j] = array[j + 1];
        }
        array[n - 1] = temp;
    }
}
void ShiftLeft(int array[ROWS][COLS], int shifts) {
    int temp;
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
void ShiftLeft(double array[ROWS][COLS], int shifts) {
    double temp;
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
void ShiftLeft(char array[ROWS][COLS], int shifts) {
    char temp;
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

void ShiftRight(int array[], int n, int shifts) {
    int temp;
    for (int i = 0; i < shifts; ++i) {
        temp = array[n - 1];
        for (int j = n - 1; j >= 0; --j) {
            array[j] = array[j - 1];
        }
        array[0] = temp;
    }
}
void ShiftRight(double array[], int n, int shifts) {
    double temp;
    for (int i = 0; i < shifts; ++i) {
        temp = array[n - 1];
        for (int j = n - 1; j >= 0; --j) {
            array[j] = array[j - 1];
        }
        array[0] = temp;
    }
}
void ShiftRight(char array[], int n, int shifts) {
    char temp;
    for (int i = 0; i < shifts; ++i) {
        temp = array[n - 1];
        for (int j = n - 1; j >= 0; --j) {
            array[j] = array[j - 1];
        }
        array[0] = temp;
    }
}
void ShiftRight(int array[ROWS][COLS], int shifts) {
    int temp;
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
void ShiftRight(double array[ROWS][COLS], int shifts) {
    double temp;
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
void ShiftRight(char array[ROWS][COLS], int shifts) {
    char temp;
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
void UniqueRand(int array[], int n) {
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
void UniqueRand(double array[], int n) {
    for (int i = 0; i < n; ++i) {
        bool isMet;
        do {
            isMet = true;
            array[i] = (double)rand() / 1000;
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
void UniqueRand(char array[], int n) {
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
                array[i][j] = (double)rand() / 1000;
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
void Sort(int array[], int n) {
    int temp;
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
void Sort(double array[], int n) {
    double temp;
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
void Sort(char array[], int n) {
    char temp;
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
void Sort(int array[ROWS][COLS]) {
    int temp;
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
void Sort(double array[ROWS][COLS]) {
    double temp;
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
void Sort(char array[ROWS][COLS]) {
    char temp;
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
void Search(int array[], int n) {
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
            cout << "Число " << (int) array[i] << " повторилось " << count << "раз." << endl;
        }
    }
}
void Search(double array[], int n) {
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
            cout << "Число " << (int) array[i] << " повторилось " << count << "раз." << endl;
        }
    }
}
void Search(char array[], int n) {
    for (int i = 0; i < n; ++i) {
        int count = 0;
        bool isMet = false;
        for (int j = 0; j < i; ++j) {
            if (array[i] == array[j]) {
                isMet = true;
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
            cout << "Число " << (int) array[i] << " повторилось " << count << "раз." << endl;
        }
    }
}
void Search(int array[ROWS][COLS]) {
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
                cout << "Число " << (int) array[i][j] << " повторилось " << count << " раз." << endl;
            }
        }
    }
}
void Search(double array[ROWS][COLS]) {
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
                cout << "Число " << (int) array[i][j] << " повторилось " << count << " раз." << endl;
            }
        }
    }
}
void Search(char array[ROWS][COLS]) {
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
                cout << "Число " << (int) array[i][j] << " повторилось " << count << " раз." << endl;
            }
        }
    }
}