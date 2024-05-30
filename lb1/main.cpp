#include <iostream>
#include <string>
#include "colorize.h"
#include "LabString.h"
#include "LabContainer.h"

int main()
{
    LabString myString("Hello, world!");
    std::cout << colorize("Start string: ") << myString.getString() << std::endl;
    myString.append(" How are you?");
    std::cout << colorize("Modified string: ") << myString.getString() << std::endl;
    myString.removeSubstring(", world");
    std::cout << colorize("After removing 'world': ") << myString.getString() << std::endl;
    myString.replaceSubstring("you", "everyone");
    std::cout << colorize("After replacing 'you' with 'everyone': ") << myString.getString() << std::endl;
    std::cout << colorize("Character count: ") << myString.getCharacterCount() << std::endl;
    LabContainer container;
    container.addText("Hello, world!");
    container.addText("How are you?");
    container.addText("Hello, world!"); // Duplicate
    container.print();
    container.removeDuplicates();
    std::cout << colorize("use removeDuplicates()") << std:: endl;
    container.print();
    container.replace("world", "you");
    std::cout << colorize("replace('world', 'you')") << std:: endl;
    container.print();
    std::cout << colorize("Frequency 'o' in container: ") << container.getCharacterFrequency('o') << std::endl;
    return 0;
}
