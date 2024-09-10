#include <iostream>
#include <cmath>

int main() {

    std::string answer; // declare string
    using int_t = int; // this exist for some reason, called a typeface

    std::cout << "Do you want money?" << std::endl; // output
    std::cin >> answer; // user input

    if(answer == "Yes"){
        std::cout << "Insane" << std::endl;
    } else {
      std::cout << "Damn ok Elon Musk" << std::endl;
    }
    
    return 0;
}
