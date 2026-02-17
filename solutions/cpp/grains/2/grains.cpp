#include "grains.h"

namespace grains {
    unsigned long long total (){
        unsigned long long rice{0};
        for (int i{0}; i<64; i++){
            rice += square(i+1);
        }
        return rice;
    }

    unsigned long long square (int square_no){
        unsigned long long rice{1};
        for (int i{1}; i<square_no; i++){
            rice *= 2;
        }
        return rice;
    }
// TODO: add your solution here

}  // namespace grains
