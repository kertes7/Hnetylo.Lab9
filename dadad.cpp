#include <iostream>
#include <Windows.h>
#include <cmath>

struct Triangle {
    double x1, y1, x2, y2, x3, y3;

    Triangle(double x1, double y1, double x2, double y2, double x3, double y3)
        : x1(x1), y1(y1), x2(x2), y2(y2), x3(x3), y3(y3) {
    }
    double area() const {
        double a = std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2)); 
        double b = std::sqrt(std::pow(x3 - x2, 2) + std::pow(y3 - y2, 2)); 
        double c = std::sqrt(std::pow(x1 - x3, 2) + std::pow(y1 - y3, 2)); 

        double s = (a + b + c) / 2;
        return std::sqrt(s * (s - a) * (s - b) * (s - c));
    }
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Triangle triangle(0, 0, 3, 0, 0, 4);

    std::cout << "Площа трикутника: " << triangle.area() << std::endl;

    return 0;
}
