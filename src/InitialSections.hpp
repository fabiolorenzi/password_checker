#pragma once

#include <iostream>

enum OptionType
{
    Numbers,
    LowerChar,
    CapChar,
    Symbols
};

void initialScript();
std::string passwordInput();
bool optionsInput(OptionType type);
void showingScript(int options);