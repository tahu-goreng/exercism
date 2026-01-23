#include "speedywagon.h"

namespace speedywagon {

// Enter your code below:
    bool connection_check (pillar_men_sensor* sensor){
        return sensor != nullptr;
    }

    int activity_counter(pillar_men_sensor* addr, int sensors){
        int total{};
        for (int i=0; i<sensors; i++){
            total+=(addr+i)->activity;
        }
        return total;
    }

    bool alarm_control (pillar_men_sensor* addr){
        if (connection_check(addr)){
            return addr -> activity >0;
        }
        return false;
    }

    bool uv_alarm (pillar_men_sensor* addr){
        if (connection_check(addr)){
            return uv_light_heuristic(&(addr->data))>addr->activity;
        }
        return false;
    }
// Please don't change the interface of the uv_light_heuristic function
int uv_light_heuristic(std::vector<int>* data_array) {
    double avg{};
    for (auto element : *data_array) {
        avg += element;
    }
    avg /= data_array->size();
    int uv_index{};
    for (auto element : *data_array) {
        if (element > avg) ++uv_index;
    }
    return uv_index;
}

}  // namespace speedywagon
