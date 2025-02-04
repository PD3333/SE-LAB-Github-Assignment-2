/**
 * @file calculator.cpp
 * @brief A simple calculator program
 * 
 * This program defines a Calculator class that allows users to perform basic arithmetic operations.
 */

#include <iostream>

/**
 * @class Calculator
 * @brief A class representing a simple calculator.
 */
class Calculator {
public:
    /**
     * @brief Adds two numbers.
     * @param a The first number.
     * @param b The second number.
     * @return The sum of a and b.
     */
    double add(double a, double b) {
        return a + b;
    }

    /**
     * @brief Subtracts one number from another.
     * @param a The first number.
     * @param b The second number.
     * @return The difference of a and b.
     */
    double subtract(double a, double b) {
        return a - b;
    }

    /**
     * @brief Multiplies two numbers.
     * @param a The first number.
     * @param b The second number.
     * @return The product of a and b.
     */
    double multiply(double a, double b) {
        return a * b;
    }

    /**
     * @brief Divides one number by another.
     * @param a The numerator.
     * @param b The denominator.
     * @return The quotient of a and b.
     */
    double divide(double a, double b) {
        if (b != 0) {
            return a / b;
        } else {
            std::cerr << "Error: Division by zero!\n";
            return 0;
        }
    }
};

/**
 * @brief The main function demonstrating the Calculator class.
 * @return int Exit status.
 */
int main() {
    Calculator calc;
    
    double num1 = 10, num2 = 5;
    std::cout << "Addition: " << calc.add(num1, num2) << "\n";
    std::cout << "Subtraction: " << calc.subtract(num1, num2) << "\n";
    std::cout << "Multiplication: " << calc.multiply(num1, num2) << "\n";
    std::cout << "Division: " << calc.divide(num1, num2) << "\n";
    
    return 0;
}
