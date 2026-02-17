#include "lasagna_master.h"
#include <vector>
#include <string>
namespace lasagna_master {
// TODO: add your solution here
    int preparationTime(std::vector<std::string> layers, int avg_time){
        return layers.size()*avg_time;
    }
    amount quantities (std::vector <std::string> layers){
        int noodles{};
        double sauce {};
        for (size_t i=0; i<layers.size(); i++){
            if (layers[i]=="sauce") {sauce +=0.2;}
            if (layers[i]=="noodles") {noodles+=50;}
        }
        return amount {noodles, sauce};
    }

void addSecretIngredient (std::vector<std::string>& recipe, const std::vector<std::string>& secret){
    recipe.pop_back();
    recipe.push_back(secret.back());
}

std::vector<double> scaleRecipe(const std::vector<double> quantities, int portions){
    std::vector<double> scaled{};
    for (size_t i=0; i<quantities.size(); i++){
        scaled.push_back(quantities[i]*portions/2);
    }
    return scaled;
}

void addSecretIngredient (std::vector<std::string>& recipe, std::string secret){
    recipe.pop_back();
    recipe.push_back(secret);
}
}  // namespace lasagna_master
