#pragma once

#include<stdexcept>
#include<vector>
#include<string>

namespace say {
    std::string in_english (long long input);

    std::string ten (int num);
    std::string hundred (int num);
    std::string thousand (long long num);
    std::string million (long long num);
    std::string billion (long long num);

    struct position{
        static inline const std::vector<std::string> single{"zero", "one","two","three", "four", "five", "six", "seven", "eight", "nine"};
        static inline const std::vector<std::string> weirds{"ten","eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
        static inline const std::vector<std::string> tens{"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    };
}  // namespace say
