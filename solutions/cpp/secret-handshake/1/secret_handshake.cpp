#include "secret_handshake.h"

namespace secret_handshake {
    std::vector<std::string> commands(int input){
        std::bitset<5> binary = input;
        std::vector<std::string> result;
        
        if(binary[0]){result.push_back("wink");}
        if(binary[1]){result.push_back("double blink");}
        if(binary[2]){result.push_back("close your eyes");}
        if(binary[3]){result.push_back("jump");}
        if(binary[4]){std::reverse(result.begin(), result.end());}
        
        return result;
    }
}  // namespace secret_handshake
