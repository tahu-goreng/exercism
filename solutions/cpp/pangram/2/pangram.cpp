#include "pangram.h"

#include <bitset>
#include <algorithm>

namespace pangram {
    bool is_pangram(std::string phrase){
        std::bitset<26> list;
        for (auto c:phrase){
            if (std::isalpha(c)){
                list.set(std::tolower(c)-'a');    
            }
        }
        return list.all();
    }
// TODO: add your solution here

}  // namespace pangram
