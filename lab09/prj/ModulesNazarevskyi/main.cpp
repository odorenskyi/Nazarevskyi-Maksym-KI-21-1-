#include <iostream>
#include <cmath>
#include <bitset>
#include <string>
#include "ModulesNazarevskyi.h"

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

string test_module(bool result)
{
    if(result){
        return "Test is passed";
    }
    else{
        return "Test failed";
    }
}
