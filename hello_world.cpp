#include <iostream>

int main() {
    // ask user's name
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;

    // print personalized heelo world message
    std::cout << "\nHello world from " << name << std::endl;
    return 0;
}