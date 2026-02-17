#include "nucleotide_count.h"

namespace nucleotide_count {
    std::map<char, int> count(std::string input){
        std::map<char, int> dna{{'A',0},{'T',0},{'G',0},{'C',0}};
        std::vector<char> valid_protein{'A','C','T','G'};
    
        for(auto const i:input){
            if(std::find(valid_protein.begin(), valid_protein.end(), i)==valid_protein.end()){
                throw std::invalid_argument("Error");
            }
            dna[i]+=1;
        }
        return dna;
    }
}  // namespace nucleotide_count
