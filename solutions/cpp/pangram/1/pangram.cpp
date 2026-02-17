#include "pangram.h"

namespace pangram {
    bool is_pangram (std::string input){
        // Capitalize all letters
        std::transform (input.begin(), input.end(), input.begin(), ::toupper);
        // Make a list A to Z with all of them set to false
        int ascii {65};
        std::vector<check> list{};
        
        for(int i{0}; i<26; i++){
             list.push_back(check(false, char(ascii+i)));
        }
        //Check for each letter
        for (size_t i{0}; i<input.size(); i++){
            for (int j{0}; j<26; j++){
                if (list[j].alphabet==input[i]){
                    list[j].tf = true;
                }
            }
        }
        //check is there 26 true
        int letters {0};
        for (int i{0}; i<26; i++){
            if (list[i].tf==true){
                letters +=1;
            }
        }
        return letters == 26;
    }
}  // namespace pangram
