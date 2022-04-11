#include <iostream>
#include <cmath>
#include <bitset>
#include <string>
#include <sstream>
#include <fstream>
#include <cstring>
#include <ctime>
#include "ModulesNazarevskyi.h"
;

using namespace std;

double s_calculation(float x, float y, float z)
{
    return z*sin(pow(x,2) * y) + sqrt(abs(z - x*12))/pow(y,3);
}
double bofort(int bal)
{
    switch (bal)
    {
    case 0:
        cout << "< 0.3 - Штиль";
        return 0.3;
        break;
    case 1:
        cout << "0.3 - 1.5 - Тихий";
        return 1.5;
        break;
    case 2:
        cout << "1.5 - 3.3 - Легкий";
        return 3.3;
        break;
    case 3:
        cout << "3.3 - 5.4 - Слабкий";
        return 5.4;
        break;
    case 4:
        cout << "5.4 - 7.9 - Помірний";
        return 7.9;
        break;
    case 5:
        cout << "7.9 - 10.7 - Свіжий";
        return 10.7;
        break;
    case 6:
        cout << "10.7 - 13.8 - Сильний";
        return 13.8;
        break;
    case 7:
        cout << "13.8 - 17.1 - Міцний";
        return 17.1;
        break;
    case 8:
        cout << "17.1 - 20.7 - Дуже міцний";
        return 20.7;
        break;
    case 9:
        cout << "20.7 - 24.4 - Шторм";
        return 24.4;
        break;
    case 10:
        cout << "24.4 - 28.4 - Сильний шторм";
        return 28.4;
        break;
    case 11:
        cout << "28.4 - 32.6 - Шквальний шторм";
        return 32.6;
        break;
    case 12:
        cout << ">32.6 - Ураган(Буревій)";
        return 32.7;
        break;
    default:
        cout << "Невірний бал Бофорта, введіть число від 0 до 12";
        return -1;

    }

}

powers powAndNum(int n, int m)
{
    powers p;
    p.n = pow(n, m);
    p.m = pow(m, n);
    cout << "Непарні числа у проміжку: ";
    for (int i = n; i <= m; ++i){
            if (i%2){
        cout << i <<" ";
        }
    }
    cout << endl;
    cout << "Число n в степені m = " << p.n << endl;
    cout << "Число m в степені n = " << p.m << endl;
    return p;
}

int numBit(int num)
{
    if(num < 0 || num > 80000){
        cout << "Невірне число, введіть число від 0 до 80000 " << endl;
        return -1;
    }
    bitset<32> b_number(num);
    if(b_number[2]){
        return b_number.count();
    }
    else {
        return 32 - b_number.count();
    }
}

//10
void canToRedaction(string outputFileName, string inputFileName)
{
    ofstream inputFile(inputFileName);
    ofstream outputFile(outputFileName);

    if (!inputFile || !outputFile) {
		cout << "Помилка, неможливо відкрити файл для редагування\a" << endl;
        inputFile.close();
        outputFile.close();
		exit(1);
	}
	inputFile.close();
	outputFile.close();
}

bool inputTxtFile(string inputFileName, string inputText)
{
    ofstream inputFile(inputFileName, ios::out);
	inputFile << inputText << endl << endl;
	inputFile.close();
	return true;
}
// Task 10.1
bool myInfo(string outputFileName)
{
    ofstream outputFile(outputFileName, ios::out);
	outputFile << " Виконавець:         Назаревський Максим Володимирович" << endl
               << " Рік розробки:       2022" << endl
               << " Країна, місто:      Україна, Кропивницький" << endl
               << " ВНЗ:                Центральний Національний Технічний Університет" << endl << endl;
    outputFile.close();
    return true;
}

int numberSymbolsInText(string outputFileName, string inputTextInFile)
{
    ofstream outputFile(outputFileName, ios::app);

    int numberSymbols = 0;

    for (int i = 0; i < inputTextInFile.length(); i++){
        numberSymbols++;
    }

    outputFile << "Кількість символів з вхідного файлу: "
               << numberSymbols << endl << endl;
    outputFile.close();
    return numberSymbols;
}

bool wordsInText(string outputFileName, string inputTextInFile)
{
    ofstream outputFile(outputFileName, ios::app);

    size_t word1 = inputTextInFile.find("програма");
    size_t word2 = inputTextInFile.find("модуль");
    size_t word3 = inputTextInFile.find("студент");
    size_t word4 = inputTextInFile.find("програміст");

    if (word1 != string::npos)
        outputFile << "Знайдено слово 'програма'" << endl << endl;
     else
        outputFile << "Cлово 'програма' - не знайдено" << endl << endl;

    if (word2 != string::npos)
        outputFile << "Знайдено слово 'модуль'" << endl << endl;
     else
        outputFile << "Cлово 'модуль' - не знайдено" << endl << endl;

    if (word3 != string::npos)
        outputFile << "Знайдено слово 'студент'" << endl << endl;
     else
        outputFile << "Cлово 'студент' - не знайдено" << endl << endl;

    if (word4 != string::npos)
        outputFile << "Знайдено слово 'програміст'" << endl << endl;
     else
        outputFile << "Cлово 'програміст' - не знайдено" << endl << endl;

    outputFile.close();
    return true;
}
//Task 10.2
int numbersInText(string inputFileName, string inputTextInFile)
{
    ofstream inputTxtFile(inputFileName, ios::app);
    char numbers[10] = {'0','1','2','3','4','5','6','7','8','9'};
    int numbersAmount = 0;

    for (int i = 0; i < inputTextInFile.length(); i++) {
        for(int j = 0; j < 10; j++)
        if (numbers[j] == inputTextInFile[i]) {
            numbersAmount++;
        }
    }
    inputTxtFile << "Кількість цифр у вхідному файлі: "
                 << numbersAmount << endl << endl;
    inputTxtFile.close();
    return numbersAmount;
}

bool timeInFile(string inputFileName)
{
    ofstream inputFile(inputFileName, ios::app);
    time_t indefTime;
    time(&indefTime);
    inputFile << "Дата та час дозапису інформаціїї: "
              << ctime(&indefTime) << endl << endl;
    inputFile.close();
    return true;
}
//Task 10.3
double sCalculationInFile(string outputFileName, float x, float y, float z)
{
    ofstream outputFile("outputFile.txt", ios::app);
    outputFile << "Результат виконання функції s_calculation: "
               << s_calculation(x, y, z) << endl << endl;
    outputFile.close();
    return s_calculation(x, y, z);
}

bool numberBInFile(string outputFileName, unsigned int b)
{
    ofstream outputFile(outputFileName, ios::app);
    bitset<32> b_number(b);
    outputFile << "Число b у двійковому коді: "
               << b_number << endl;
    outputFile.close();
    return true;
}
