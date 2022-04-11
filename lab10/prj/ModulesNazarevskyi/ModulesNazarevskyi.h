#ifndef MODULESNAZAREVSKYI_H_INCLUDED
#define MODULESNAZAREVSKYI_H_INCLUDED
#include <iostream>

#include <cmath>
#include <cstring>

using namespace std;

struct powers {
int n;
int m;
};

double s_calculation(float x, float y, float z);
double bofort(int bal);
powers powAndNum(int n, int m);
int numBit(int num);
void canToRedaction(string outputFileName, string inputFileName);
bool inputTxtFile(string inputFileName, string inputText);
bool myInfo(string outputFileName);
int numberSymbolsInText(string outputFileName, string inputTextInFile);
bool wordsInText(string outputFileName, string inputTextInFile);
int numbersInText(string inputFileName, string inputTextInFile);
bool timeInFile(string inputFileName);
double sCalculationInFile(string outputFileName, float x, float y, float z);
bool numberBInFile(string outputFileName, unsigned int b);
#endif // MODULESNAZAREVSKYI_H_INCLUDED
