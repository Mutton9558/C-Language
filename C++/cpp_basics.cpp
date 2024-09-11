#include <iostream> // input and output
#include <fstream> // file
#include <cmath>
#include <stdio.h>
#include <vector> // to enable vectors


int main() {

    std::string answer;
    using int_t = int; // this exist for some reason

    std::cout << "Do you want money?" << std::endl;
    std::cin >> answer;

    if(answer == "Yes"){
        std::cout << "Insane" << std::endl;
    }

    // File handling
    std::fstream myFile;
    myFile.open("test.txt", std::ios::out); // write
    if(myFile.is_open()){
        myFile << "Hello World" << std::endl;
        myFile.close();
    }
    
    myFile.open("test.txt", std::ios::app); // append
    if(myFile.is_open()){
        myFile << "New Information" << std::endl;
        myFile.close();
    }

    std::vector<std::string> lines; // resizeable array using vectors, in this case it only accepts strings
    myFile.open("test.txt", std::ios::in); // read
    if(myFile.is_open()){
        std::string line;
        while(getline(myFile, line)){
            lines.push_back(line);
        }
    }

    std::string lineArr[lines.size()];
    for (int i = 0; i < lines.size(); i++) {
        lineArr[i] = lines[i]; // Copy elements from the vector to the array
    }

    std::cout << "The lines in text file test.txt are: " << std::endl;
    std::cout << "[";
    for (int i = 0; i < lines.size(); i++) {
        if (i != lines.size()-1){
            std::cout << lineArr[i] << ", ";
        } else {
            std::cout << lineArr[i] << "]";
        }
    }

    return 0;
}
