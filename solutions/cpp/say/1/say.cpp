#include "say.h"

namespace say{
    std::string in_english (long long input){
        if (input<0 || input >999'999'999'999){
            throw std::domain_error("Input error, please re-input");
        }

        if (input<100){
            return ten(input);
        } else if (input<1000){
            return hundred(input);
        } else if (input <1'000'000){
            return thousand(input);
        } else if (input <1'000'000'000){
            return million(input);
        }
        return billion(input);
    }

//single{"zero", "one","two","three", "four", "five", "six", "seven", "eight", "nine"};
//weirds{"ten","eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
//tens{"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    
    std::string ten (int num){
        if (num<10){
            return position::single[num];
        } else if (num<20){
            return position::weirds[num%10];
        } else if (num%10 == 0){
            return position::tens[num/10-2];
        }
        return position::tens[num/10-2] + "-" + position::single[num%10];
    }
    std::string hundred (int num){
        if (num<100){
            return ten(num);
        } else if (num%100 == 0){
            return position::single[num/100] +" hundred";
        }
        return position::single[num/100] + " hundred " + ten(num%100);
    }
    std::string thousand (long long num){
        int thousands = num/1000;
        int hundreds = num%1000;
        if (num%1000 == 0){
            return hundred(thousands) +" thousand";
        }
        return hundred(thousands) + " thousand " + hundred(hundreds);
    }
    std::string million (long long num){
        int millions = num/1'000'000;
        long long rem = num%1'000'000;
        if (num%1'000'000 == 0){
            return hundred(millions) +" million";
        }
        return hundred(millions)+" million "+thousand(rem);
    }
    std::string billion (long long num){
        int billions = num/1'000'000'000;
        int rem = num%1'000'000'000;
        if (num%1'000'000'000 == 0){
            return hundred(billions) +" billion";
        }
        return hundred(billions) +" billion " + million(rem);
    }
}