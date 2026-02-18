#include "collatz_conjecture.h"

namespace collatz_conjecture {
    int steps (int input){
        if (input <=0){
            throw std::domain_error("Invalid input, must be bigger than 0");
        }

        int steps_needed{};
        while (input!=1){
            if (input%2==0){
                input/=2;
                steps_needed+=1;
                continue;
            } 
            input = (input*3)+1;
            steps_needed+=1;
        }
        return steps_needed;
    }
// TODO: add your solution here

}  // namespace collatz_conjecture
