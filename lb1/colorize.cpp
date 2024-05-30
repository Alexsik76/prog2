#include <string>
std::string colorize(std::string string) 
    {
        std::string c_start = "\x1B[32m";
        std::string c_end = "\033[0m";
        return c_start.append(string).append(c_end);
    }