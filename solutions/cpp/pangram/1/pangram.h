#pragma once

#include <string>
#include <vector>
#include <algorithm>

namespace pangram {
    struct check{
        bool tf {};
        char alphabet{};
        check (bool trufls, char letter){
            tf = trufls;
            alphabet = letter;
        }
    };

    bool is_pangram(std::string input);

// TODO: add your solution here

}  // namespace pangram
