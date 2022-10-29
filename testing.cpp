#include <iostream>
#include <vector>
#include <algorithm>



int main () {

    std::vector<int> num1 = {1, 5, 3, 2, 3};
    std::vector<int> num2 = {10, 1, 7, 7, 4};

    sort(num1.begin(), num1.end());

    std::cout << "SORT NUM1: ";

    for (int i = 0; i < num1.size(); i++) {
        std::cout << num1[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "SORT NUM2: ";
    sort(num2.begin(), num2.end());
    for (int i = 0; i < num2.size(); i++) {
        std::cout << num2[i] << " ";
    }
    std::cout << std::endl;

    std::vector<int> num3(num1.size()+num2.size());
    std::merge(num1.begin(), num1.end(), num2.begin(), num2.end(), num3.begin());

    std::cout << "SORT NUM3: ";

    for (int i = 0; i < num3.size(); i++){
        std::cout << num3[i] << " ";
    }
    

    return 0;
}