#include <iostream>
#include <locale.h>
#include <iomanip>
#include <conio.h>
#include <cstring>

#include "ModulesNazarevskyi.h"
using namespace std;

int x = 0, y = 0, z = 0;
char a = '0', b = '0';

string Copyright()
{
    return "© Назаревський Максим Володимирович";
}

void inputValues(int Y, int X, int Z, char A, char B)
{
     cout << "Введіть значення y: " << endl;
        cin >> Y; y = Y;
    cout << "Введіть значення x: : " << endl;
        cin >> X; x = X;
    cout << "Введіть значення z: " << endl;
        cin >> Z; z = Z;
    cout << "Введіть символ a: " << endl;
        cin >> A; a = A;
    cout << "Введіть символ b: " << endl;
        cin >> B; b = B;
}

bool Compare(int A, int B)
{
  return A + 1 == B + 2;
}

void DecAndHex(int Y, int X, int Z)
{
    cout << "'y' в десятковій: " << dec << Y << endl
         << "'x' в десятковій: " << dec << X << endl
         << "'z' в десятковій: " << dec << Z << endl << endl;

    cout << "'y' в шістнацятковій: " << hex << Y << endl
         << "'x' в шістнацятковій: " << hex << X << endl
         << "'z' в шістнацятковій: " << hex << Z << endl;
}

int main()
{
    char *locale = setlocale(LC_ALL, "ukr");
    system("chcp 866 & cls");
    cout << Copyright() << endl << endl;
    inputValues(y, x, z, a, b);
    cout << boolalpha
         << "Результат " << a << " + 1 = 2 + " << b << " : " << Compare(a, b) << endl << endl;
    DecAndHex(y, x, z);
    cout << endl << "Результат виразу: " << s_calculation(y, x, z);
    _getch(); return 0;
}

