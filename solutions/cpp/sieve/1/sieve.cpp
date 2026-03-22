#include "sieve.h"

namespace sieve {
    std::vector<int> primes(int max){
        std::vector<std::pair <int,bool> > unmarked;
        std::vector<int> sieved{};
        
        if (max<2){
            return sieved;
        }
        
        for (int i{2}; i<=max; i++){
            unmarked.push_back({i, false});
            //The prime will be left unmarked so all the prime will have false
        }

        sieved = marking(unmarked);
        return sieved;
    }

    std::vector<int> marking(std::vector<std::pair<int, bool>> unmarked){
        // {{2,false},{3,false},{4,false},{5,false},{6,false},{7,false},{8,false}}
        for (auto& i:unmarked){
            if (!i.second){
                for (auto& j:unmarked){
                    if (j.second || j.first ==i.first){continue;}
                    j.second = (j.first%i.first==0);
                }
            }
        }
        std::vector<int> marked;
        for (auto i:unmarked){
            if (!i.second){
                marked.push_back(i.first);
            }
        }
        return marked;
    }
}  // namespace sieve
