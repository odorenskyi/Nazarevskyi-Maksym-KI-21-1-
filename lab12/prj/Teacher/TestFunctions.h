#ifndef TESTFUNCTIONS_H_INCLUDED
#define TESTFUNCTIONS_H_INCLUDED

#include "ModulesNazarevskyi.h"

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

bool fileInDirectory()
{
    string cpp = __FILE__;
    size_t found = cpp.find("\\lab12\\prj");

    if (found == string::npos) {
        ofstream resFile("../../TestSuite/TestResults.txt");
        resFile << "Встановлені вимоги порядку виконання лабораторної роботи порушено!" << endl;
        for (int i = 0; i < 100; i++) {
            cout << "\a";
        }
        resFile.close();
        return false;
    }
    return true;
}

bool filesIsOpen(ofstream &wfile, ifstream &rfile)
{
    if (!rfile.is_open() || !wfile.is_open() || !rfile || !wfile) {
        ofstream resFile("../../TestSuite/TestResults.txt");
        resFile << "Встановлені вимоги порядку виконання лабораторної роботи порушено!" << endl;
        resFile.close();
        return false;
    }
    return true;
}

void declareTestSuiteResults(ofstream &resFile, ClassLab12_Nazarevskyi pipe, string outArea, string expArea, int index)
{
    resFile << " TEST CASE " << setw(2) << index << setw(40) << "" << endl;
    resFile << " (input)    Pipe height: " << setw(19) << pipe.getPipeHeight() << " cм" << endl;
    resFile << " (input)    Pipe length: " << setw(19) << pipe.getPipeLength() << " cм" << endl;
    resFile << " (input)    Pipe width: " << setw(20) << pipe.getPipeWidth() << " cм" << endl;
    resFile << " (output)   Pipe parallelepiped: " << setw(11) << outArea << " cм^3" << endl;
    resFile << " (expected) Pipe parallelepiped: " << setw(11) << expArea << " cм^3" << endl;
    resFile << " TEST CASE RESULT:       " << setw(21) << boolalpha << (expArea.compare(outArea) == 0) << "" << endl;
    resFile << "------------------------------------------------------" << endl;
}

#endif // TESTFUNCTIONS_H_INCLUDED
