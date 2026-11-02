#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream myFile("sample.txt");
    if(!myFile.is_open()) {
        std::cerr << "the file could not be opened\n";
        return 1;
    }
    std::string myText;
    while(std::getline(myFile, myText)) {
        std::cout << myText << '\n';
    }
    return 0;
}