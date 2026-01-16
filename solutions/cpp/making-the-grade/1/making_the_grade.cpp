#include <array>
#include <string>
#include <vector>

using namespace std;

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    int temp;
    vector <int> rounded_down{};
    for (int i=0; i<student_scores.size(); i++){
        temp = student_scores[i];
        rounded_down.emplace_back(temp);
    }
    return rounded_down;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    int failed=0;
    int i=0;
    while (i<student_scores.size()){
        if (student_scores[i]<=40){
            failed+=1;
        }
        i+=1;
    }
    return failed;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    int increment = (highest_score-40)/4;
    std::array <int, 4> letter;
    for (int i=0; i<4; i++){
        letter [i]= 41+increment*i;
    }
    return letter;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    std::vector<string> sorted;
    for (int i=0; i<student_scores.size(); i++){
        sorted.push_back(std::to_string(i+1) + ". " + student_names[i] + ": " + to_string(student_scores[i]));
    }
    return sorted;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    std::vector<string> perfect;
    for (int i=0; i<student_scores.size(); i++){
        if (student_scores[i]==100){
            return student_names[i];
        } 
    }
    return "";
}
