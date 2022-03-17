#include <iostream>
#include <iomanip>
#include <conio.h>
#include <clocale>

#include "ModulesNazarevskyi.h"

using namespace std;

int main()
{
    char *locale = setlocale(LC_ALL, "ukr");
    float cX[5] = { 3, -5, 0, 11, -3 };
    float cY[5] = { 2, -1, 12, 5, -25 };
    float cZ[5] = { 5, 8, 0, -6, -7 };

    double expectedResult[5] = { -3.05897, -7.1874, 0, -5.72915, -6.51101 };
    double doneResult = 0;
    double NAC = 0.00005; // ЧИСЛА ПІСЛЯ КОМИ
    bool TestResult = false;

    for (int i = 0; i < 5; i++) {
        doneResult = s_calculation(cX[i], cY[i], cZ[i]);
        if (abs(expectedResult[i]) >= abs(doneResult))
            { TestResult = abs(expectedResult[i]) - abs(doneResult) <= NAC; }
        else
            { TestResult = abs(doneResult) - abs(expectedResult[i]) <= NAC; }

        cout << "Тестові значення №" << i + 1 << " : "
             << "X = " << cX[i]
             << "  Y = " << cY[i]
             << "  Z = " << cZ[i]
             << endl;
        cout << "Очікуваний результат: " << expectedResult[i] << endl;
        cout << "Отриманий результат : " << doneResult << endl;
        cout << boolalpha << "Тестовий результат  : " << TestResult << endl << endl;
    }
    _getch();
    return 0;
}
