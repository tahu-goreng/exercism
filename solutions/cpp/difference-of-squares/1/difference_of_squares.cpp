#include "difference_of_squares.h"

namespace difference_of_squares {
    int sum_of_squares (int no){
        int val{};
        for (int i=0; i<=no; i++){
            val += i*i;
        } 
        return val;
    }
    int square_of_sum (int no){
        int val{};
        for (int i{0}; i<=no; i++){
            val+=i;
        }
        return val*val;
    }
    int difference (int no){
        return square_of_sum(no)-sum_of_squares(no);
    } 
// TODO: add your solution here

}  // namespace difference_of_squares
