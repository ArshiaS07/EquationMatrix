#include <iostream>
#include <vector>

#include "EquationMatrix.hpp"


void printVector(const std::vector<double>& vec) {
    for (const auto& element : vec) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}

int main(){
    ArshiaMath::EquationMatrix equationMatrix({{1, 2}, {3, 4}}, {5, 6});

    std::cout << "Mat A:\n" << equationMatrix.getMatrix() << std::endl;

    std::cout << "Vec b:\n";
    printVector(equationMatrix.getVector());
    std::cout << std::endl;


    std::getchar();

    return 0;
}