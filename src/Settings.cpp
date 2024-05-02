#include "Settings.hpp"

Settings::Settings(std::string _userPassword, bool _hasNumbers, bool _hasLowerChar, bool _hasCapChar, bool _hasSymbols)
{
    hasNumbers = _hasNumbers;
    hasLowerChar = _hasLowerChar;
    hasCapChar = _hasCapChar;
    hasSymbols = _hasSymbols;

    chars = populateChars();

    for (int x {0}; x < _userPassword.length(); ++x) {
        userPassword.push_back(_userPassword[x]);
    }
    
    options = std::pow(chars.size(), userPassword.size());
}

Settings::~Settings()
{

}

std::vector<char> Settings::populateChars()
{
    char numbers[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char lowerChar[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char capChar[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    char symbols[11] = {'!', '$', '%', '^', '<', '>', '?', '-', '@', '~', '#'};

    std::vector<char> result = {' '};

    if (hasNumbers) {
        for (char x : numbers) {
            result.push_back(x);
        }
    }

    if (hasLowerChar) {
        for (char x : lowerChar) {
            result.push_back(x);
        }
    }

    if (hasCapChar) {
        for (char x : capChar) {
            result.push_back(x);
        }
    }

    if (hasSymbols) {
        for (char x : symbols) {
            result.push_back(x);
        }
    }

    return result;
}