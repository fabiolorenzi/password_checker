#pragma once

#include <iostream>
#include <vector>

#include "Settings.hpp"

int starter();
std::string brutalize(Settings _settings);
std::string sumString(std::vector<char> _brutePassword);
bool checkPassword(std::vector<char> _brutePassword, std::vector<char> _userPassword);
void successScript(std::string value, int timeRequired);