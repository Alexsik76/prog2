#ifndef LAB_STRING_H
#define LAB_STRING_H
#include <string> 

class LabString
{
    std::string data;
    
public:
    LabString(const std::string str){
        data = str;
    };
 
    void append(const std::string& str) {
        data += str;
    }

    void removeSubstring(const std::string& substr) {
        size_t pos = data.find(substr);
        if (pos != std::string::npos) {
            data.erase(pos, substr.length());
        }
    }

    void replaceSubstring(const std::string& oldSubstr, const std::string& newSubstr) {
        size_t pos = data.find(oldSubstr);
        if (pos != std::string::npos) {
            data.replace(pos, oldSubstr.length(), newSubstr);
        }
    }

    int getCharacterCount() const {
        return data.length();
    }

    std::string getString() const {
        return data;
    }
};
 
#endif