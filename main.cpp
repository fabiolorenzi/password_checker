#include <iostream>

#include "src/Checker.hpp"
#include "src/InitialSections.hpp"
#include "src/Settings.hpp"

int main()
{
    initialScript();
    Settings settings = Settings(
        passwordInput(),
        optionsInput(OptionType::Numbers),
        optionsInput(OptionType::LowerChar),
        optionsInput(OptionType::CapChar),
        optionsInput(OptionType::Symbols)
    );
    std::cout << settings.options << std::endl;
    int isValid = showingScript(settings.options);

    if (isValid > 0) {
        if (starter() == 1) {
            std::cout << "Run" << std::endl;
        }
    }

    return 0;
}