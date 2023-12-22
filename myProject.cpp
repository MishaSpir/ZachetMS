#include <iostream>
#include <vector>
#include "myFunctions.cpp"

 
int main() {
    std::vector<int> data = {1, 2, 3, 4, 5,-1,-2,-3,0};
    for (int elem : data) {
        std::cout << elem << " ";
    }
    std::cout << "\n";
    
    contrast2(data);
}