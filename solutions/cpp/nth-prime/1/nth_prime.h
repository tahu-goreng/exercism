#pragma once

#include <vector>
#include <stdexcept>

namespace nth_prime {
    int nth(std::size_t n);
    int find_prime(std::vector<int> prime_list);
    bool check_prime(int current, std::vector<int> list);
}  // namespace nth_prime
