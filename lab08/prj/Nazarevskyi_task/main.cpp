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
    return "� ������������ ������ �������������";
}

void inputValues(int Y, int X, int Z, char A, char B)
{
     cout << "������ �������� y: " << endl;
        cin >> Y; y = Y;
    cout << "������ �������� x: " << endl;
        cin >> X; x = X;
    cout << "������ �������� z: " << endl;
        cin >> Z; z = Z;
    cout << "������ ������ a: " << endl;
        cin >> A; a = A;
    cout << "������ ������ b: " << endl;
        cin >> B; b = B;
}

bool Compare(int A, int B)
{
  return A + 1 == B + 2;
}

void DecAndHex(int Y, int X, int Z)
{
    cout << "'y' � ���������: " << dec << Y << endl
         << "'x' � ���������: " << dec << X << endl
         << "'z' � ���������: " << dec << Z << endl << endl;

    cout << "'y' � �������������: " << hex << Y << endl
         << "'x' � �������������: " << hex << X << endl
         << "'z' � �������������: " << hex << Z << endl;
}

int main()
{
    char *locale = setlocale(LC_ALL, "ukr");
    system("chcp 1251 & cls");
    cout << Copyright() << endl << endl;
    inputValues(y, x, z, a, b);
    cout << boolalpha
         << "��������� " << a << " + 1 = 2 + " << b << " : " << Compare(a, b) << endl << endl;
    DecAndHex(y, x, z);
    _getch();
    cout << endl << "��������� ������: " << s_calculation(y, x, z);
    _getch(); return 0;
}

