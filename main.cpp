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
    return "© Ќазаревський ћаксим ¬олодимирович";
}

void inputValues(int Y, int X, int Z, char A, char B)
{
     cout << "¬вед≥ть значенн€ y: " << endl;
        cin >> Y; y = Y;
    cout << "¬вед≥ть значенн€ x: " << endl;
        cin >> X; x = X;
    cout << "¬вед≥ть значенн€ z: " << endl;
        cin >> Z; z = Z;
    cout << "¬вед≥ть символ a: " << endl;
        cin >> A; a = A;
    cout << "¬вед≥ть символ b: " << endl;
        cin >> B; b = B;
}

bool Compare(int A, int B)
{
  return A + 1 == B + 2;
}

void DecAndHex(int Y, int X, int Z)
{
    cout << "'y' в дес€тков≥й: " << dec << Y << endl
         << "'x' в дес€тков≥й: " << dec << X << endl
         << "'z' в дес€тков≥й: " << dec << Z << endl << endl;

    cout << "'y' в ш≥стнац€тков≥й: " << hex << Y << endl
         << "'x' в ш≥стнац€тков≥й: " << hex << X << endl
         << "'z' в ш≥стнац€тков≥й: " << hex << Z << endl;
}

int main()
{
    char *locale = setlocale(LC_ALL, "ukr");
    system("chcp 1251 & cls");
    cout << Copyright() << endl << endl;
    inputValues(y, x, z, a, b);
    cout << boolalpha
         << "–езультат " << a << " + 1 = 2 + " << b << " : " << Compare(a, b) << endl << endl;
    DecAndHex(y, x, z);
    _getch();
    cout << endl << "–езультат виразу: " << s_calculation(y, x, z);
    _getch(); return 0;
}

