#include "triangle.h"

namespace triangle {
    int matching_sides(float s1, float s2, float s3){
        int match{0};
        if (s1==s2){
            match += 1;
        } 
        if (s1==s3){
            match +=1;
        } 
        if (s2==s3){
            match +=1;
        }
        return match;
    }
    
    flavor kind (float s1, float s2, float s3){
        flavor triangle{};
        while (valid_check (s1, s2, s3)){
            switch (matching_sides (s1,s2,s3)){
            case 0:
                triangle = scalene;
                break;
            case 1:
                triangle= isosceles;
                break;
            case 3:
                triangle = equilateral;
                break;
            }
            return triangle;
        } 
        throw std::domain_error("Invalid Triangle");
    }

    bool valid_check(float s1, float s2, float s3){
        return (s1>0&&s2>0&&s3>0)&&((s1+s2)>s3&&(s2+s3)>s1&&(s1+s3)>s2);
    }
// TODO: add your solution here

}  // namespace triangle
