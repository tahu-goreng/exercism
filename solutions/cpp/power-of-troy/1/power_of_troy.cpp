#include "power_of_troy.h"

namespace troy {
    void give_new_artifact (human& human, std::string artifacts){
        human.possession = std::make_unique<artifact>(artifacts);
    }

    void exchange_artifacts(std::unique_ptr<artifact>& possesion1, std::unique_ptr<artifact>& possesion2){
        std::swap (possesion1, possesion2);
    }

    void manifest_power(human& human, std::string powers){
        human.own_power = std::make_unique<power>(powers);
    }

    void use_power (human& human1, human& human2){
        human2.influenced_by =human1.own_power;
    }

    int power_intensity (human& human){
        return human.own_power.use_count();
    }
}  // namespace troy
