#include "space_age.h"

namespace space_age {
    space_age::space_age (double age){
        vseconds = age;
        von_earth = age/earth_year_seconds;
        von_mercury = von_earth/0.2408467;
        von_venus = von_earth/0.61519726;
        von_mars = von_earth/1.8808158;
        von_jupiter = von_earth/11.862615;
        von_saturn = von_earth/29.447498;
        von_uranus = von_earth/84.016846;
        von_neptune = von_earth/164.79132;
    }
// TODO: add your solution here

}  // namespace space_age
