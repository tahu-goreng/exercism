#include "queen_attack.h"

namespace queen_attack {
    //throw domain error if it is a negative coordinate or outside of board (0-7)
    chess_board::chess_board(std::pair<int,int> white, std::pair<int,int> black){
        if (!(on_board(white) && on_board(black)) || white == black){
            throw std::domain_error("error");
        }
        w_pos = white;
        b_pos = black;
    }

    bool chess_board::can_attack() const {
        int abs_x = abs(w_pos.first-b_pos.first);
        int abs_y = abs(w_pos.second-b_pos.second);
        return (w_pos.first == b_pos.first || w_pos.second == b_pos.second || abs_x == abs_y);
    }
            
    bool chess_board::on_board(std::pair<int,int> queen){
        return (queen.first>=0 && queen.first<8 && queen.second >=0 && queen.second <8);
    }
            
    std::pair<int,int> chess_board::white() const{
        return w_pos;
    }
    
    std::pair<int,int> chess_board::black() const{
        return b_pos;
    }
    
}  // namespace queen_attack
