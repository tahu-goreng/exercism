#include <string>
using namespace std;

namespace log_line {
    std::string message(std::string line) {
        // return the message
        int message_start = line.find (": ");
        return line.substr(message_start+2);
    }
    
    std::string log_level(std::string line) {
        // return the log level
        int level_start = line.find ("[");
        int level_end = line.find("]");
        return line.substr(level_start+1, level_end-1);
    }
    
    std::string reformat(std::string line) {
        // return the reformatted message
        string reformat;
        reformat = message(line) + " (" + log_level(line) + ")"; 
        return reformat;
    }
}  // namespace log_line
