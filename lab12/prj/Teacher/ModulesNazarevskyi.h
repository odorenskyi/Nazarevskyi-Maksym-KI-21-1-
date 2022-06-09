#ifndef MODULESNAZAREVSKYI_H_INCLUDED
#define MODULESNAZAREVSKYI_H_INCLUDED

#include <string>
#include <cstring>
#include <sstream>
#include <regex>

using namespace std;

class ClassLab12_Nazarevskyi
{
public:
    ClassLab12_Nazarevskyi();

    float getPipeHeight() { return pipeHeight; }
    float getPipeLength() { return pipeLength; }
    float getPipeWidth() { return pipeWidth; }
    float getPipeParallelepiped() { return pipeParallelepiped(pipeHeight, pipeLength, pipeWidth); }

    void setPipeHeight(string height, float&f);
    void setPipeLength(string radius, float&f);
    void setPipeWidth(string radius, float&f);


private:
    float pipeHeight;
    float pipeLength;
    float pipeWidth;
    float pipeParallelepiped(float height, float length, float width) { return length * width * height; };
};

ClassLab12_Nazarevskyi::ClassLab12_Nazarevskyi()
{
    pipeHeight = 1;
    pipeLength = 1;
    pipeWidth = 1;
}

void ClassLab12_Nazarevskyi::setPipeHeight(string height, float&f)
{
    pipeHeight = 1;
    char junk;
    height = regex_replace(height, regex(","), ".");
    stringstream ss(height);
    if (ss >> f && !(ss >> junk)) {
        if (stof(height) >= 1 && stof(height) <= 60) {
            pipeHeight = stof(height);
        }
    }
}

void ClassLab12_Nazarevskyi::setPipeLength(string length, float&f)
{
    pipeLength = 1;
    char junk;
    length = regex_replace(length, regex(","), ".");
    stringstream ss(length);
    if (ss >> f && !(ss >> junk)) {
        if (stof(length) >= 1 && stof(length) <= 150) {
            pipeLength = stof(length);
        }
    }
}

void ClassLab12_Nazarevskyi::setPipeWidth(string width, float&f)
{
    pipeWidth = 1;
    char junk;
    width = regex_replace(width, regex(","), ".");
    stringstream ss(width);
    if (ss >> f && !(ss >> junk)) {
        if (stof(width) >= 1 && stof(width) <= 60) {
            pipeWidth = stof(width);
        }
    }
}

#endif // MODULESNAZAREVSKYI_H_INCLUDED
