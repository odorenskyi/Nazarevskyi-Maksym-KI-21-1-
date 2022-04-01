#include <iostream>
#include <ModulesNazarevskyi.h>

using namespace std;

int main()
{
    powers p;
    char *locale = setlocale(LC_ALL, "");
    int bal[5] = {0, 1, 2, 3, 4};
    double result_bofort[5] {0.3, 1.5, 3.3, 5.4, 7.9};
    cout << "Тест завдання 9.1" << endl;
    for (int i = 0; i < 5; i++){
        if (result_bofort[i] == bofort(bal[i])){
            cout << endl;
            cout << "Passed" << endl;
        }
        else {cout << endl; cout << "Failed" << endl;}
    }
 cout << "Тест завдання 9.2" << endl;
    p = powAndNum(2, 5);
    if (p.n == 32 && p.m == 25){
        cout << "Passed" << endl;
    }
    else {cout << "Failed" << endl;}

    p = powAndNum(3, 6);
    if (p.n == 729 && p.m == 216){
        cout << "Passed" << endl;
    }
    else {cout << "Failed" << endl;}

    p = powAndNum(2, 9);
    if (p.n == 512 && p.m == 81){
        cout << "Passed" << endl;
    }
    else {cout << "Failed" << endl;}

    cout << "Тест завдання 9.3" << endl;
    int num[5] = {22, 28312, 3042, 13, 2270};
    int result_numBit [5] = {3, 24, 25, 3, 7};
    for (int i = 0; i < 5; i++){
        cout << (result_numBit[i] == numBit(num[i])) << endl;
        if (result_numBit[i] == numBit(num[i])){
            cout << "Passed" << endl;
        }
        else {cout << "Failed" << endl;}
    }
    return 0;
}
