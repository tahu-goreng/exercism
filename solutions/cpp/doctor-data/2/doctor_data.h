// ERROR: FILE CORRUPTED. Please supply valid C++ Code.

#pragma once
#include <iostream>
#include <string>

namespace star_map{
    enum class System {AlphaCentauri, BetaHydri, DeltaEridani, EpsilonEridani, Omicron2Eridani, Sol};
}

namespace heaven{
    class Vessel{
        public:
            std::string name;
            int generation;
            int busters{0};
            star_map::System current_system{star_map::System::Sol};
            
            Vessel (std::string inserted_name, int number, star_map::System system = star_map::System::Sol);
            Vessel replicate(std::string replicated);
            void make_buster ();
            bool shoot_buster();
    };
    
    bool in_the_same_system (Vessel name1, Vessel name2);
    std::string get_older_bob (Vessel name1, Vessel name2);
}