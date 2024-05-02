#include "Checker.hpp"

int starter()
{
    int choice {0};
    std::cout << "Ready to run? [0: no, 1: yes]" << std::endl;
    std::cin >> choice;
    return choice;
}

void brutalize(Settings _settings)
{
    std::vector<char> charsOptions = _settings.populateChars();
    char brutePassword[_settings.userPassword.size()];
    
    for (int x {0}; x < (sizeof(brutePassword) / sizeof(char)); x++) {
        brutePassword[x] = 'a';
    }

    std::cout << brutePassword << std::endl;
}