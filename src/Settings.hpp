#pragma once

#include <iostream>
#include <cmath>
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
    std::vector<char> userPassword;
    std::vector<char> chars;

    Settings(bool _hasNumbers, bool _hasLowerChar, bool _hasCapChar, bool _hasSymbols, std::string _userPassword);
    ~Settings();
    std::vector<char> populateChars();
};