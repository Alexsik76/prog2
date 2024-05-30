#ifndef LAB_CONTAINER_H
#define LAB_CONTAINER_H
#include <string> 
#include <vector>
#include <algorithm>
#include <iostream>
#include "LabString.h"
#include "colorize.h"

class LabContainer {
    std::vector<LabString> texts;
public:
    void addText(const std::string& str) {
        texts.emplace_back(str);
    }

    void removeDuplicates() {
        std::vector<LabString> uniqueTexts;
        bool founded = false;
        for (auto &text : texts) {
            for (auto &new_text : uniqueTexts){
                if(text.getString() == new_text.getString()){
                    founded = true;
                    break;
                }
            }
            if(!founded){
                uniqueTexts.emplace_back(text);
            }
        }
        texts = uniqueTexts;
    }
    void print(){
        std::cout << colorize("Container is:") << std:: endl;
        for (auto &text : texts) {
            std::cout << text.getString() << std::endl;
        }
    }

    void replace(const std::string& from_str, const std::string& to_str){
        for (auto  &text : texts) {
            text.getCharacterCount();
            text.replaceSubstring(from_str, to_str);
    }
    }

    double getCharacterFrequency(char c) {
        int totalCharacters = 0;
        int characterCount = 0;
        for (const LabString& text : texts) {
            std::string temp_text = text.getString();
            totalCharacters += text.getCharacterCount();
            characterCount += std::count(temp_text.begin(), temp_text.end(), c);
        }
        return static_cast<double>(characterCount) / totalCharacters;
    }
};


#endif