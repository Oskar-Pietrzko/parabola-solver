#include <iostream>
#include <cmath>

auto main() -> int {
    float a, b, c;

    std::cout << "ax^2 + bx^2 + c = 0" << std::endl << std::endl;

    std::cout << "Enter the first number (a): ";
    std::cin >> a;

    std::cout << "Enter the second number (b): ";
    std::cin >> b;

    std::cout << "Enter the third number (c): ";
    std::cin >> c;

    const float delta = b * b - 4 * a * c;

    std::cout << std::endl << "The solution is:" << std::endl;

    if (delta == 0) {
        const float x1 = -b / (2 * a);

        std::cout << "Exists one solution: x1 = " << x1 << std::endl;
    } else if (delta > 0) {
        const float x1 = (-b - std::sqrt(delta)) / (2 * a);
        const float x2 = (-b + std::sqrt(delta)) / (2 * a);

        std::cout << "Exists two solutions: x1 = " << x1 << ", x2 = " << x2 << std::endl;
    } else {
        std::cout << "Solution does not exist." << std::endl;
    }

    std::cin.ignore();

    std::cout << std::endl << "Press Enter to continue...";
    std::cin.get();

    return 0;
}
