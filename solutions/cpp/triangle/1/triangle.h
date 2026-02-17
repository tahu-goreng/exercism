#pragma once

#include <stdexcept>

namespace triangle {
    //equlateral == all sides the same
    //isosceles == two sides same length
    //scalene == all sides are different length
    //all sides>0, sum of all 2 sides must be greater than the third side

    enum flavor{scalene, isosceles, equilateral};
    
    int matching_sides(float s1, float s2, float s3);
    bool valid_check(float s1, float s2, float s3);
    flavor kind (float s1, float s2, float s3);
    
// TODO: add your solution here

}  // namespace triangle
