#pragma once

#include <array>
#include <utility>
#include <stdexcept>
#include <cmath>

namespace queen_attack {
    struct chess_board{
    chess_board(const std::pair<int,int> white, const std::pair<int,int> black);

    bool can_attack() const;
    std::pair<int, int> white() const;
    std::pair<int, int> black() const;
    
    private:
    std::pair<int,int> w_pos;
    std::pair<int,int> b_pos;
    };
}  // namespace queen_attack
