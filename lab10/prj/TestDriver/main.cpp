#include <iostream>
#include <conio.h>
#include <cstring>
#include <clocale>
#include "ModulesNazarevskyi.h"

using namespace std;

int main()
{
    char *locale = setlocale(LC_ALL, "ukr");

    const string inputText[5] = { "Цей студент помив руки 3 рази.",
                                  "8 Березня - це жіночий день, студентка була задоволена.",
                                  "Я успішно виконав 3 завдання, модульчик вдався.",
                                  "Моя програма працює успішно.",
                                  "Цей програміст налічив 252 країни, але з них лише 195 держав"
                                };
    const int numberSymbols[5] = {25, 47, 41, 25, 52};
    const int numbersAmount[5] = {1, 2, 4, 2, 6};

    int cX[5] = { 3, -5, 0, 11, -3 };
    int cY[5] = { 2, -1, 12, 5, -25 };
    int cZ[5] = { 5, 8, 0, -6, -7 };

    double expectedResult[5] = { -3.05897, -7.1874, 0, -5.72915, -6.51101 };
    const unsigned int natNumber[5] = { 5238, 27, 422, 156, 5238 };

    for(int i = 0; i < 5; i++){
        canToRedaction("outputFile.txt", "inputFile.txt");
        cout << boolalpha
             << "10 - Запис тексту до вхідного файлу: \n"
             << inputTxtFile("inputFile.txt", inputText[i]) << endl;
        cout << boolalpha
             << "10.1(1) - Запис авторської інформації до вихідного файлу: \n"
             << myInfo("outputFile.txt") << endl;
        cout << boolalpha
             << "10.1(2) - Результат підрахунку кількості цифр та дозапис до вихідного файлу: \n"
             << (numbersInText("inputFile.txt", inputText[i]) == numbersAmount[i]) << endl;
        cout << boolalpha
             << "10.1(3) - Результат пошуку слів та дозапис до вихідного файлу: \n"
             << wordsInText("outputFile.txt", inputText[i]) << endl;
        cout << boolalpha
             << "10.2(1) - Результат підрахунку кількості символів та дозапис до вхідного файлу: "
             << (numberSymbolsInText("inputFile.txt", inputText[i]) == numberSymbols[i])  << endl;
        cout << boolalpha
             << "10.2(2) - Дозапис часу редагування файлу до вхідного файлу: \n"
             << timeInFile("inputFile.txt") << endl;
        cout << boolalpha
             << "10.3(1) - Дозапис результату функції s_calculation до вихідного файлу: \n"
             <<(sCalculationInFile("outputFile.txt", cX[i], cY[i], cZ[i]) <= expectedResult[i] + 0.0005) << endl;
        cout << boolalpha
             << "10.3(2) - Результат конвертування десяткового числа в двійкове та дозапис до вихідного файлу: \n"
             << numberBInFile("outputFile.txt", natNumber[i]) << endl << endl << endl;
        _getch();
    }
    return 0;
}
