#include "reverse_string.h"

namespace reverse_string {
    std::string reverse_string (std::string str){
        std::string reverse{};
        for (size_t i{0}; i<str.size(); i++){
            reverse  += str[str.size()-1-i];
        }
        return reverse;
    }
// TODO: add your solution here

}  // namespace reverse_string
