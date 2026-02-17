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
            
            Vessel (std::string inserted_name, int number){
                name = inserted_name;
                generation = number;
            }
            Vessel (std::string inserted_name, int number, star_map::System system){
                name = inserted_name;
                generation = number;
                current_system = system;
            }
            
            Vessel replicate(std::string replicated){
                return Vessel{replicated, generation + 1, current_system};
            }
            
            void make_buster (){
                busters +=1;
            }
            
            bool shoot_buster(){
                if (busters > 0){
                    busters -= 1;
                    return true;
                }
                return false;
            }
    };
    
    bool in_the_same_system (Vessel name1, Vessel name2){
        return name1.current_system == name2.current_system;
    }
    
    std::string get_older_bob (Vessel name1, Vessel name2){
        if (name1.generation < name2.generation){
            return name1.name;
        }
        return name2.name;
    }
}