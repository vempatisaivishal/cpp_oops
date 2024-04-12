#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    // Constructor
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    // Overloading the + operator
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    // Overloading the - operator
    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }

    // Overloading the * operator
    Complex operator*(const Complex& other) const {
        return Complex(real * other.real - imag * other.imag, real * other.imag + imag * other.real);
    }

    // Overloading the == operator
    bool operator==(const Complex& other) const {
        return (real == other.real) && (imag == other.imag);
    }

    // Overloading the != operator
    bool operator!=(const Complex& other) const {
        return !(*this == other);
    }

    // Overloading the << operator for output
    friend std::ostream& operator<<(std::ostream& os, const Complex& c) {
        os << "(" << c.real << ", " << c.imag << "i)";
        return os;
    }
};

int main() {
    Complex a(3.0, 4.0);
    Complex b(1.0, 2.0);

    Complex c = a + b;
    Complex d = a - b;
    Complex e = a * b;

    std::cout << "a + b = " << c << std::endl;
    std::cout << "a - b = " << d << std::endl;
    std::cout << "a * b = " << e << std::endl;

    if (c == d) {
        std::cout << "c and d are equal" << std::endl;
    } else {
        std::cout << "c and d are not equal" << std::endl;
    }

    if (a != b) {
        std::cout << "a and b are not equal" << std::endl;
    } else {
        std::cout << "a and b are equal" << std::endl;
    }

    return 0;
}

