#include <iostream>
#include "Complex.h"
#include "ComplexCout.cpp"

int main() {
    Complex *z1 = new Complex(-50, -3);
    Complex *z2 = new Complex(12, 4);

    ComplexCout::taskMult(*z1, *z2);
    ComplexCout::coutMult(*z1, *z2);
    Complex *mult = new Complex(*z1 * *z2);
    ComplexCout::resultCoplex(*mult);

    ComplexCout::taskSum(*z1, *z2);
    ComplexCout::coutSum(*z1, *z2);
    Complex *sum = new Complex(*z1 + *z2);
    ComplexCout::resultCoplex(*sum);

    ComplexCout::taskSub(*z1, *z2);
    ComplexCout::coutSub(*z1, *z2);
    Complex *sub = new Complex(*z1 - *z2);
    ComplexCout::resultCoplex(*sub);

    ComplexCout::taskDiv(*z1, *z2);
    Complex *div = new Complex(*z1 / *z2);
    ComplexCout::resultCoplex(*div);

    double mod = Complex::mod(*z1);
    std::cout << mod << std::endl;
}
