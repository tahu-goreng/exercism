#pragma once

#include <map>
#include <string>
#include <vector>
#include <algorithm>

namespace grade_school {
    struct school{
    void add(std::string name, int grade);
    std::map <int, std::vector<std::string>> roster() const;
    std::vector<std::string> grade(int grade) const;

    std::map<int, std::vector<std::string>> storage{};
    };
}  // namespace grade_school
