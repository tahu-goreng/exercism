#include "nth_prime.h"

namespace nth_prime {
    int nth(int n){
        if (n==0){
            throw std::domain_error("Error");
        }
        int number{3};
        int nth_prime{1};
        
        if (n==1){
            return 2;
        }
        
        while (true){
            if (is_prime(number)){
                nth_prime +=1;
                if(nth_prime==n){
                    return number;
                }
            }
            number+=2;
        }
    }
    bool is_prime(const int& x){
        const float limit = sqrt(x);
        
        for (int i=2; i<=limit; i++){
            if (x%i==0){
                return false;
            }
        }
        return true;
    }
}  // namespace nth_prime
