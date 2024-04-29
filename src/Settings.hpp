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

    Settings(std::string _userPassword, bool _hasNumbers, bool _hasLowerChar, bool _hasCapChar, bool _hasSymbols);
    ~Settings();
    std::vector<char> populateChars();
};