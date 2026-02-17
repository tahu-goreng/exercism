#pragma once

#include <vector>
#include <string>

namespace lasagna_master {

struct amount {
    int noodles;
    double sauce;
};
    int preparationTime(std::vector<std::string> layers, int avg_time = 2);
    amount quantities (std::vector <std::string> layers);

    void addSecretIngredient (std::vector<std::string>& recipe, const std::vector<std::string>& secret);
    std::vector<double> scaleRecipe(const std::vector<double> quantities, int portions);
    void addSecretIngredient (std::vector<std::string>& recipe, std::string secret);
}  // namespace lasagna_master
