#include "queen_attack.h"

namespace queen_attack {
    //throw domain error if it is a negative coordinate or outside of board (0-7)
    chess_board::chess_board(std::pair<int,int> white, std::pair<int,int> black){
        std::pair<int,int> board_size {8,8};
        std::pair<int,int> min_val{0,0};
        if (white.first < min_val.first || white.first >= board_size.first || black.first < min_val.first || black.first >= board_size.first || white.second < min_val.second || white.second >= board_size.second || black.second < min_val.second || black.second >= board_size.second || white == black){
            throw std::domain_error("error");
        }
        w_pos = white;
        b_pos = black;
    }

    bool chess_board::can_attack() const {
        if (w_pos.first == b_pos.first || w_pos.second == b_pos.second || abs(w_pos.first-b_pos.first) == abs (w_pos.second-b_pos.second)){
            return true;
        }
        return false;
    }
    
    std::pair<int,int> chess_board::white() const{
        return w_pos;
    }
    
    std::pair<int,int> chess_board::black() const{
        return b_pos;
    }
    
}  // namespace queen_attack
