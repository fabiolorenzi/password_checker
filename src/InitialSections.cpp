#include "InitialSections.hpp"

void initialScript()
{
    std::cout << std::endl;
    std::cout << "      ---------------------     ------------------------" << std::endl;
    std::cout << "     /                   /     /                      /" << std::endl;
    std::cout << "    /                   /     /                      /" << std::endl;
    std::cout << "   /                PASSWORD CHECKER                /" << std::endl;
    std::cout << "  /                   /     /                      /" << std::endl;
    std::cout << " /                   /     /                      /" << std::endl;
    std::cout << "--------------------      ------------------------" << std::endl;
    std::cout << std::endl;
    std::cout << "Welcome to Password Checker" << std::endl;
    std::cout << "Developed by F.Lorenzi" << std::endl;
    std::cout << std::endl;
}

std::string passwordInput()
{
    std::string password;
    std::cout << "Please insert the password to check: ";
    std::cin >> password;

    return password;
}

bool optionsInput(OptionType type)
{
    std::string target;
    std::string choice;

    if (type == OptionType::Numbers) {
        target = "numbers";
    } else if (type == OptionType::LowerChar) {
        target = "lower chars";
    } else if (type == OptionType::CapChar) {
        target = "capitol chars";
    } else {
        target = "symbols";
    }

    std::cout << "Do you want to check for " << target << "? [0: no] [1: yes]" << std::endl;
    std::cin >> choice;

    if (choice == "0") {
        return false;
    }
    return true;
}

void showingScript(int options)
{
    std::cout << std::endl;

    if (options < 5) {
        std::cout << "Error: Please add some options to check" << std::endl;
    } else {
        std::cout << "With the length of the password inserted and the options," << std::endl;
        std::cout << "the software has to check " << std::to_string(options) << " possible passwords" << std::endl;
    }

    std::cout << std::endl;
}