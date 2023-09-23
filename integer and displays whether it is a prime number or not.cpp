#include <iostream>

bool isPrime(int number) {
    if (number <= 1) {
        return false; // 0 and 1 are not prime numbers
    }
    
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false; // Number is divisible by a factor other than 1 and itself
        }
    }
    
    return true; // Number is prime
}

int main() {
    int number;

    // Input an integer
    std::cout << "Enter an integer: ";
    std::cin >> number;

    // Check if the number is prime
    if (isPrime(number)) {
        std::cout << number << " is a prime number." << std::endl;
    } else {
        std::cout << number << " is not a prime number." << std::endl;
    }

    return 0;
}