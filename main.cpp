#include <iostream>

#include "src/Checker.hpp"
#include "src/InitialSections.hpp"
#include "src/Settings.hpp"

int main()
{
    initialScript();

    std::string _password = passwordInput();
    if (_password == "!!!!!!!!!!!!!!!!!!!!") {
        return 0;
    };

    bool _hasNumbers = optionsInput(OptionType::Numbers);
    bool _hasLower = optionsInput(OptionType::LowerChar);
    bool _hasCapChar = optionsInput(OptionType::CapChar);
    bool _hasSymbols = optionsInput(OptionType::Symbols);

    Settings settings = Settings(_password, _hasNumbers, _hasLower, _hasCapChar, _hasSymbols);

    std::cout << settings.options << std::endl;
    showingScript(settings.options);

    if (starter() == 1) {
        std::cout << "Run" << std::endl;
    }

    return 0;
}