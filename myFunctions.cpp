#include <iostream>
#include <vector>

void contrast2(std::vector<int>v){
    int max{v[0]};
    int min{v[0]};

 for (auto e : v){
    if (e < min) min = e;
    if (e > max) max = e;
 }

std:: cout << "MINimum2: " << min << std::endl;
std:: cout << "MAXimum2: " << max << std::endl;


}