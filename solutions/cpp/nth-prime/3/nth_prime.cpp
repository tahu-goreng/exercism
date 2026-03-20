#include "nth_prime.h"

namespace nth_prime {
    int find_prime(std::vector<int> prime_list){        
        int current_num{prime_list.back()+2};
        
        while (!check_prime(current_num, prime_list)){
            current_num+=2;
        }
        return current_num;
    }
    
    bool check_prime(int current_num, std::vector<int> prime_list){
        for (const int& p:prime_list){
            if (p*p>current_num){break;}
            if (current_num%p==0){
                return false;
            }
        }
        return true;
    }
    
    int nth(std::size_t n){
        if (n==0){
            throw std::domain_error("Invalid input");
        }
        std::vector<int> prime{2,3};
        if (n==1){return 2;}
        if (n==2){return 3;}
        while (prime.size()<n){
            prime.push_back(find_prime(prime));
        }
        return prime.back();
    }
}  // namespace nth_prime