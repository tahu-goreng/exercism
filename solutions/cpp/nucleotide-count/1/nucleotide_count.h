#pragma once

#include <string>
#include <algorithm>
#include <map>
#include <vector>
#include <stdexcept>

namespace nucleotide_count {
    std::map<char, int> count(std::string input);
}  // namespace nucleotide_count
