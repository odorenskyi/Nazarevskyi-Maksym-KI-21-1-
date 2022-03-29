#include <iostream>
#include <cmath>
#include <bitset>
#include "ModulesNazarevskyi.h"

using namespace std;

double s_calculation(float x, float y, float z)
{
    return z*sin(pow(x,2) * y) + sqrt(abs(z - x*12))/pow(y,3);
}
void bofort(int bal)
{
    switch (bal)
    {
    case 0:
        cout << "< 0.3 - Штиль";
        break;
    case 1:
        cout << "0.3 - 1.5 - Тихий";
        break;
    case 2:
        cout << "1.5 - 3.3 - Легкий";
        break;
    case 3:
        cout << "3.3 - 5.4 - Слабкий";
        break;
    case 4:
        cout << "5.4 - 7.9 - Помірний";
        break;
    case 5:
        cout << "7.9 - 10.7 - Свіжий";
        break;
    case 6:
        cout << "10.7 - 13.8 - Сильний";
        break;
    case 7:
        cout << "13.8 - 17.1 - Міцний";
        break;
    case 8:
        cout << "17.1 - 20.7 - Дуже міцний";
        break;
    case 9:
        cout << "20.7 - 24.4 - Шторм";
        break;
    case 10:
        cout << "24.4 - 28.4 - Сильний шторм";
        break;
    case 11:
        cout << "28.4 - 32.6 - Шквальний шторм";
        break;
    case 12:
        cout << ">32.6 - Ураган(Буревій)";
        break;
    default:
        cout << "Невірний бал Бофорта, введіть число від 0 до 12";
    }
}

int twoPowers(int n, int m)
{
    cout << "Непарні числа у проміжку: ";
    for (int i = n; i <= m; ++i){
            if (i%2){
        cout << i <<" ";
        }
    }
    cout << endl;
    cout << "Число n в степені m = ";
    cout << pow(n,m) << endl;
    cout << "Число m в степені n = ";
    return pow(m,n);
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
