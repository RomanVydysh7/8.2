#include <iostream>
#include <string>
#include <cctype> 


int findLongestWordLength(const std::string& str) {
    int maxLength = 0; 
    int currentLength = 0; 

    for (char c : str) {
        if (std::isalpha(c)) { 
            currentLength++;
        }
        else {
            if (currentLength > maxLength) {
                maxLength = currentLength; 
            }
            currentLength = 0; 
        }
    }

 
    if (currentLength > maxLength) {
        maxLength = currentLength;
    }

    return maxLength;
}

int main() {
    std::string str;

    std::cout << "Input: ";
    std::getline(std::cin, str);

    int longestWordLength = findLongestWordLength(str);
    std::cout << "max: " << longestWordLength << std::endl;

    return 0;
}
