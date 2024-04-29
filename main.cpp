#include <iostream>

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
    showingScript(settings.options);

    return 0;
}