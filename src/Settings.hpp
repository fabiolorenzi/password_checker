#pragma once

#include <iostream>
#include <vector>

class Settings
{
public:
    bool hasNumbers;
    bool hasLowerChar;
    bool hasCapChar;
    bool hasSymbols;
    std::vector<char> possibleCharacters;
    int options;

    Settings();
    ~Settings();
    std::vector<char> populateChars();
};