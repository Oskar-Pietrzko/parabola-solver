#include <iostream>
#include <cmath>

auto main() -> int {
    double a, b, c;

    std::cout << "ax^2 + bx^2 + c = 0" << std::endl << std::endl;

    std::cout << "Enter the first number (a): ";
    std::cin >> a;

    std::cout << "Enter the second number (b): ";
    std::cin >> b;

    std::cout << "Enter the third number (c): ";
    std::cin >> c;

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                std::cout << "The equation has infinitely many solutions." << std::endl;
            } else {
                std::cout << "The equation is inconsistent, no solutions." << std::endl;
            }
        } else {
            const double x = -c / b;

            std::cout << "Linear equation, solution: " << x << std::endl;
        }
    } else {
        if (const double delta = b * b - 4 * a * c; delta == 0) {
            const double x1 = -b / (2 * a);

            std::cout << "The quadratic equation has one solution: " << x1 << std::endl;
        } else if (delta > 0) {
            const double x1 = (-b - std::sqrt(delta)) / (2 * a);
            const double x2 = (-b + std::sqrt(delta)) / (2 * a);

            std::cout << "The quadratic equation has two solutions: " << x1 << " and " << x2 << std::endl;
        } else {
            std::cout << "The quadratic equation has no solutions." << std::endl;
        }
    }

    std::cin.ignore();

    std::cout << std::endl << "Press Enter to continue...";
    std::cin.get();

    return 0;
}
