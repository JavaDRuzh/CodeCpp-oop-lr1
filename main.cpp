#include "Complex.h"

int main() {
    Complex *z1 = new Complex(50,3);
    Complex *z2 = new Complex(12,4);

    Complex mult = Complex::mult(*z1, *z2);
    Complex sum = Complex::sum(*z1,*z2);
    Complex sub = Complex::sub(*z1, *z2);
    Complex div = Complex::div(*z1, *z2);
}