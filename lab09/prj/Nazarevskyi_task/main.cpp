#include <iostream>
#include <locale.h>
#include <windows.h>
#include <ModulesNazarevskyi.h>

using namespace std;

int main()
{
    char *locale = setlocale(LC_ALL, "");
    int x = 0, y = 0, z = 0;
    int bal = 0;
    int n = 0, m = 0;
    int num = 0;
    char symbol;
    do {
        cout << endl;
        cout << "Натисніть символ" << endl;
        cout << " u - для підрахунку чисел x, y, z за формулою" << endl;
        cout << " o - для визначення швидкості та характеристики вітру" << endl;
        cout << " p - для підрахунку n^m і m^n, всі непарні числа у діапазоні від n до m" << endl;
        cout << " a - для визначення кількості двійкових 0 у числі, якщо біт D2 числа = 0, інакше - кількість двійкових 1" << endl;
        cout << " s - для завершення роботи" << endl;
        cin >> symbol;
        if (symbol == 'u'){
            cout << "Введіть  x: " << endl;
            cin >> x;
            cout << "Введіть  y: " << endl;
            cin >> y;
            cout << "Введіть  z: " << endl;
            cin >> z;
            cout << "Результат: " << endl;
            cout << s_calculation(x, y, z) << endl;
        }
        else if(symbol == 'o'){
            cout << "Введіть бал Бофорта" << endl;
            cin >> bal;
            bofort(bal);
        }
        else if(symbol == 'p'){
            cout << "Введіть ціле число n: " << endl;
            cin >> n;
            cout << "Введіть ціле число m: " << endl;
            cin >> m;
            cout << twoPowers(n, m);
        }
        else if (symbol == 'a'){
            cout << "Введіть натуральне число: " << endl;
            cin >> num;
            cout << numBit(num) << endl;
        }
        else if (symbol != 's' && symbol != 'S') {
            cout << "\a" << endl;
        }
    } while (symbol != 's' && symbol != 'S');
}
