#include <iostream>

int main() {
    double side1, side2, side3;

    // Read the three sides of the triangle
    std::cout << "Enter the length of side 1: ";
    std::cin >> side1;

    std::cout << "Enter the length of side 2: ";
    std::cin >> side2;

    std::cout << "Enter the length of side 3: ";
    std::cin >> side3;

    // Determine the type of triangle
    if (side1 == side2 && side2 == side3) {
        std::cout << "Equilateral triangle" << std::endl;
    } else if (side1 == side2 || side1 == side3 || side2 == side3) {
        std::cout << "Isosceles triangle" << std::endl;
    } else {
        std::cout << "Scalene triangle" << std::endl;
    }

    return 0;
}