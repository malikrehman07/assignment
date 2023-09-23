#include <iostream>
#include <cmath>

const double PI = 3.14159;

int main() {
    int choice;
    double radius;
    std::cout << "Enter 1 to calculate area of circle or 2 to calculate circumference: ";
    std::cin >> choice;
    switch (choice) {
        case 1:
            std::cout << "Enter the radius of the circle: ";
            std::cin >> radius;
            std::cout << "Area of the circle: " << PI * pow(radius, 2) << std::endl;
            break;
        case 2:
            std::cout << "Enter the radius of the circle: ";
            std::cin >> radius;
            std::cout << "Circumference of the circle: " << 2 * PI * radius << std::endl;
            break;
        default:
            std::cout << "Invalid choice. Please enter 1 or 2." << std::endl;
            break;
    }

    return 0;
}