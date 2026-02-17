#pragma once

namespace space_age {
    struct space_age{
        double seconds() const {return vseconds;}
        double on_mercury() const {return von_mercury;}
        double on_venus() const {return von_venus;}
        double on_earth() const {return von_earth;}
        double on_mars() const {return von_mars;}
        double on_jupiter() const {return von_jupiter;}
        double on_saturn() const {return von_saturn;}
        double on_uranus() const {return von_uranus;}
        double on_neptune() const {return von_neptune;}

        space_age (double age);

        const double earth_year_seconds{3600*24*365.25};
        double vseconds{};
        double von_mercury{};
        double von_venus{};
        double von_earth{};
        double von_mars{};
        double von_jupiter{};
        double von_saturn{};
        double von_uranus{};
        double von_neptune{};
    };
// TODO: add your solution here

}  // namespace space_age
