#include "raindrops.h"

namespace raindrops {
    std::string convert(int no){
        std::string sound{};
        if (no%3==0){ sound += "Pling";}
        if (no%5==0){ sound += "Plang";}
        if (no%7==0){ sound += "Plong";}
        if (no%3!=0 && no%5!=0 && no%7!=0) { sound=std::to_string(no); }
        return sound;
    }
// TODO: add your solution here

}  // namespace raindrops
