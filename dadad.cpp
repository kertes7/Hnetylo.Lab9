#include <iostream>
#include <Windows.h>
#include <cmath>

class Triangle {
public:
    Triangle(double x1, double y1, double x2, double y2, double x3, double y3)
        : x1(x1), y1(y1), x2(x2), y2(y2), x3(x3), y3(y3) {
    }

    double area() const {
        double a = std::hypot(x2 - x1, y2 - y1);
        double b = std::hypot(x3 - x2, y3 - y2);
        double c = std::hypot(x1 - x3, y1 - y3);
        double s = (a + b + c) / 2;
        return std::sqrt(s * (s - a) * (s - b) * (s - c));
    }

private:
    double x1, y1, x2, y2, x3, y3;
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Triangle triangle(0, 0, 3, 0, 0, 4);
    std::cout << "Площа трикутника: " << triangle.area() << std::endl;
    return 0;
}
