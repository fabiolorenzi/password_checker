#include "Checker.hpp"

int starter()
{
    int choice {0};
    std::cout << "Ready to run? [0: no, 1: yes]" << std::endl;
    std::cin >> choice;
    return choice;
}

int brutalize(Settings _settings)
{
    std::vector<char> charsOptions = _settings.populateChars();
    std::vector<char> brutePassword;
    
    for (int x {0}; x < _settings.userPassword.size(); x++) {
        brutePassword.push_back(' ');
    }

    for (int x {0}; x < charsOptions.size(); x++) {
        brutePassword[0] = charsOptions[x];
        if (brutePassword.size() == 1) {
            std::string temp = sumString(brutePassword);
            std::cout << temp << std::endl;
            if (checkPassword(brutePassword, _settings.userPassword) == true) {
                successScript(temp);
                return 0;
            }
        }
    }

    return 0;
}

std::string sumString(std::vector<char> _brutePassword)
{
    std::string result = "";
    for (int x {0}; x < _brutePassword.size(); x++) {
        result += _brutePassword[x];
    }
    return result;
}

bool checkPassword(std::vector<char> _brutePassword, std::vector<char> _userPassword)
{
    bool isSame = true;
    for (int x {0}; x < _brutePassword.size(); x++) {
        isSame = _brutePassword[x] == _userPassword[x];
    }
    return isSame;
}

void successScript(std::string value)
{
    std::cout << std::endl;
    std::cout << "The password is: " << value << std::endl;
    std::cout << std::endl;
}