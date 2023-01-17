#include <iostream>

int main(){
    int input1, input2;

    std::cout << "WELCOME TO LOGIC GATES IN TERMINAL (with no fancy visuals)\n";

    std::cout << "Choose first input (0 for false, 1 for true):\n";
    std::cout << "1st Input: ";
    std::cin >> input1;
    while (input1 > 1 || input1 < 0){
        std::cout << "Choose again: ";
        std::cin >> input1;
    }
    std::cout << "2nd Input: ";
    std::cin >> input2;
    while (input2 > 1 || input2 < 0){
        std::cout << "Choose again: ";
        std::cin >> input2;
    }

    std::cout << "Your inputs were " << input1 << " and " << input2 << "\n";

    return 0;
}