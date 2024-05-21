#include <iostream>

int main() {
    double distance;
    double amountWithoutTax;
    double amountWithTax;

    std::cout << "Enter the distance traveled in kilometers: ";
    std::cin >> distance;

    if (distance <= 500) {
        amountWithoutTax = 30;
    } else if (distance <= 1000) {
        amountWithoutTax = 30 + (distance - 500) * 0.05;
    } else {
        amountWithoutTax = 30 + 500 * 0.05 + (distance - 1000) * 0.08;
    }

    amountWithTax = amountWithoutTax * 1.15;

    std::cout << "Amount to pay without tax: $" << amountWithoutTax << std::endl;
    std::cout << "Amount to pay with tax: $" << amountWithTax << std::endl;

    return 0;
}