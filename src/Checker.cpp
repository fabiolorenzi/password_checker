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
        } else {
            for (int y {0}; y < charsOptions.size(); y++) {
                brutePassword[1] = charsOptions[y];
                if (brutePassword.size() == 2) {
                    std::string temp = sumString(brutePassword);
                    std::cout << temp << std::endl;
                    if (checkPassword(brutePassword, _settings.userPassword) == true) {
                        successScript(temp);
                        return 0;
                    }
                } else {
                    for (int z {0}; z < charsOptions.size(); z++) {
                        brutePassword[2] = charsOptions[z];
                        if (brutePassword.size() == 3) {
                            std::string temp = sumString(brutePassword);
                            std::cout << temp << std::endl;
                            if (checkPassword(brutePassword, _settings.userPassword) == true) {
                                successScript(temp);
                                return 0;
                            }
                        } else {
                            for (int w {0}; w < charsOptions.size(); w++) {
                                brutePassword[3] = charsOptions[w];
                                if (brutePassword.size() == 4) {
                                    std::string temp = sumString(brutePassword);
                                    std::cout << temp << std::endl;
                                    if (checkPassword(brutePassword, _settings.userPassword) == true) {
                                        successScript(temp);
                                        return 0;
                                    }
                                } else {
                                    for (int v {0}; v < charsOptions.size(); v++) {
                                        brutePassword[4] = charsOptions[v];
                                        if (brutePassword.size() == 5) {
                                            std::string temp = sumString(brutePassword);
                                            std::cout << temp << std::endl;
                                            if (checkPassword(brutePassword, _settings.userPassword) == true) {
                                                successScript(temp);
                                                return 0;
                                            }
                                        } else {
                                            for (int u {0}; u < charsOptions.size(); u++) {
                                                brutePassword[5] = charsOptions[u];
                                                if (brutePassword.size() == 6) {
                                                    std::string temp = sumString(brutePassword);
                                                    std::cout << temp << std::endl;
                                                    if (checkPassword(brutePassword, _settings.userPassword) == true) {
                                                        successScript(temp);
                                                        return 0;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
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
    for (int x {0}; x < _brutePassword.size(); x++) {
        if (_brutePassword[x] != _userPassword[x]) {
            return false;
        }
    }
    return true;
}

void successScript(std::string value)
{
    std::cout << std::endl;
    std::cout << "The password is: " << value << std::endl;
    std::cout << std::endl;
}