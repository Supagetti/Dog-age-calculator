#include <iostream>

int main() {
    int dogage;
    int twoyears = 21;
    int humanyears; 

    std::cout << "How old is your dog? \n";
    std::cin >> dogage;
    
    humanyears = (dogage - 2) * 4;

    std::cout << "your dog is " << humanyears + 21 << " In human years \n";
    system("pause");
    
    }