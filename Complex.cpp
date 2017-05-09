#include "Complex.h"
#include "ComplexCout.cpp"


Complex::Complex(int re, int im) : re(re), im(im) {}

int Complex::getRe() const {
    return re;
}

int Complex::getIm() const {
    return im;
}

// Multiplication of complex numbers
Complex Complex::mult(Complex z1, Complex z2) {

    ComplexCout::taskSum(z1, z2);
    ComplexCout::coutMult(z1, z2);

    int re = z1.getRe() * z2.getRe() - z1.getIm() * z2.getIm();
    int im = z1.getIm() * z2.getRe() + z1.getRe() * z2.getIm();

    Complex *complex = new Complex(re, im);
    ComplexCout::resultCoplex(*complex);

    return *complex;
}

// Sum of complex numbers
Complex Complex::sum(Complex z1, Complex z2) {

    ComplexCout::taskSum(z1, z2);
    ComplexCout::coutSum(z1, z2);

    int re = z1.getRe() + z2.getRe();
    int im = z1.getIm() + z2.getIm();

    Complex *complex = new Complex(re, im);
    ComplexCout::resultCoplex(*complex);

    return *complex;
}

// Subtraction of complex numbers
Complex Complex::sub(Complex z1, Complex z2) {

    ComplexCout::taskSub(z1, z2);
    ComplexCout::coutSub(z1, z2);
    int re = z1.getRe() - z2.getRe();
    int im = z1.getIm() - z2.getIm();

    Complex *complex = new Complex(re, im);
    ComplexCout::resultCoplex(*complex);

    return *complex;
}

// Division of complex numbers
Complex Complex::div(Complex z1, Complex z2) {

    ComplexCout::taskDiv(z1, z2);

    int re = (z1.getRe() * z2.getRe() + z1.getIm() * z2.getIm()) /
             (z2.getRe() * z2.getRe() + z2.getIm() * z2.getIm());
    int im = (z1.getIm() * z2.getRe() - z1.getRe() * z2.getIm()) /
             (z2.getRe() * z2.getRe() + z2.getIm() * z2.getIm());

    Complex *complex = new Complex(re, im);
    ComplexCout::resultCoplex(*complex);

    return *complex;
}









