// ERROR: FILE CORRUPTED. Please supply valid C++ Code.
#include "doctor_data.h"

namespace heaven{
    Vessel::Vessel (std::string inserted_name, int number, star_map::System system){
        name = inserted_name;
        generation = number;
        current_system = system;
    }

    Vessel Vessel::replicate (std::string replicated){
        return Vessel{replicated, generation+1, current_system};
    }

    void Vessel::make_buster(){
        busters+=1;
    }

    bool Vessel::shoot_buster(){
        if (busters>0){
            busters-=1;
            return true;
        }
        return false;
    }

    bool in_the_same_system (Vessel name1, Vessel name2){
        return name1.current_system == name2.current_system;
    }

    std::string get_older_bob (Vessel name1, Vessel name2){
        if (name1.generation<name2.generation){
            return name1.name;
        }
        return name2.name;
    }
}