#pragma once

#include <vector>
#include <tuple>

namespace sieve {
    std::vector<int> primes(int max);
    std::vector<int> marking(std::vector<std::pair<int, bool>> unmarked);
}  // namespace sieve
