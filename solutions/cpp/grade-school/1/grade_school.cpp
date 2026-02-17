#include "grade_school.h"

namespace grade_school {
    void school::add(std::string name, int grade){
        storage[grade].push_back(name);
        std::sort(storage[grade].begin(), storage[grade].end());
    }
    std::map <int, std::vector<std::string>> school::roster() const{
        return storage;
    }
    std::vector<std::string> school::grade(int grade) const{
        if (storage.find(grade)!= storage.end()){
            return storage.at(grade); 
        }
        return {};
    }
}  // namespace grade_school
