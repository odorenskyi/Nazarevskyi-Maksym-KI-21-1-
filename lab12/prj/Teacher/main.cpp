#include "TestFunctions.h"

using namespace std;

int main()
{
    if (fileInDirectory() == false) { return 0; }

    ClassLab12_Nazarevskyi pipe;

    ifstream caseFile("../../TestSuite/TS.txt");
    ofstream resultFile("../../TestSuite/TestResults.txt");
    if (filesIsOpen(resultFile, caseFile) == false) { return 0; }

    for (int i = 1; i < 11; i++) {
        string pipeHeight;
        string pipeLength;
        string pipeWidth;
        string pipeParallelepiped;
        string bufLine;
        float bufFloat;

        getline(caseFile, bufLine);
        pipeHeight = bufLine.erase(0, 12);

        getline(caseFile, bufLine);
        pipeLength = bufLine.erase(0, 12);

        getline(caseFile, bufLine);
        pipeWidth = bufLine.erase(0, 11);

        getline(caseFile, bufLine);
        pipeParallelepiped = bufLine.erase(0, 20);

        pipe.setPipeHeight(pipeHeight, bufFloat);
        pipe.setPipeLength(pipeLength, bufFloat);
        pipe.setPipeWidth(pipeWidth, bufFloat);
        bufLine = to_string(pipe.getPipeParallelepiped());

        declareTestSuiteResults(resultFile, pipe, bufLine, pipeParallelepiped, i);
    }

    caseFile.close();
    resultFile.close();
    system("pause");
    return 0;
}
