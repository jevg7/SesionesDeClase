#include <iostream>

void calculatePayment(int numStudents) {
    double busCost;
    double studentCost;

    switch (numStudents) {
        case 100:
        case 101:
        case 102:
        // ... add more cases for 100 or more students
            studentCost = 60.00;
            break;
        case 50:
        case 51:
        case 52:
        // ... add more cases for 50 to 99 students
            studentCost = 70.00;
            break;
        case 30:
        case 31:
        case 32:
        // ... add more cases for 30 to 49 students
            studentCost = 100.00;
            break;
        default:
            studentCost = 0.00;
            break;
    }

    if (studentCost == 0.00) {
        busCost = 4500.00;
    } else {
        busCost = studentCost * numStudents;
    }

    std::cout << "Payment to the bus company: $" << busCost << std::endl;
    std::cout << "Payment per student: $" << studentCost << std::endl;
}

int main() {
    int numStudents;

    std::cout << "Enter the number of students: ";
    std::cin >> numStudents;

    calculatePayment(numStudents);

    return 0;
}