//
// Created by druzh on 06.05.17.
//

#include <iostream>
#include "Complex.h"
#include "ComplexCout.cpp"


Complex::Complex(int re, int im) : re(re), im(im) {}

int Complex::getRe() const {
    return re;
}

int Complex::getIm() const {
    return im;
}

void Complex::setRe(int re) {
    Complex::re = re;
}

void Complex::setIm(int im) {
    Complex::im = im;
}


void Complex::taskMult(Complex z1, Complex z2) {
    std::cout << "Multiplication of complex numbers: "<<std::endl;
    std::cout << "(" << z1.getRe() << " + " << z1.getIm() << "i) * ";
    std::cout << "(" << z2.getRe() << " + " << z2.getIm() << "i) = ";
}

void Complex::coutMult(Complex z1, Complex z2) {
    std::cout << "(" << z1.getRe() << "*" << z2.getRe() << " - ";
    std::cout << z1.getIm() << "*" << z2.getIm() << ") + ";
    std::cout << "(" << z1.getIm() << "*" << z2.getRe() << " + ";
    std::cout << z1.getRe() << "*" << z2.getIm() << ")i = ";
}

void Complex::resultCoplex(Complex z) {
    std::cout << z.getRe() << " + ";

    if(z.getIm() < 0){
        std::cout << "("<< z.getIm() << ")i" << std::endl;
    } else
        std::cout << z.getIm() << "i" << std::endl;
    std::cout << std::endl;
}

Complex Complex::mult(Complex z1, Complex z2) {

    taskMult(z1, z2);
    coutMult(z1, z2);

    int re = z1.getRe() * z2.getRe() - z1.getIm() * z2.getIm();
    int im = z1.getIm() * z2.getRe() + z1.getRe() * z2.getIm();

    Complex *complex = new Complex(re, im);
    resultCoplex(*complex);

    return *complex;
}

void Complex::taskSum(Complex z1, Complex z2) {
    std::cout << "Sum of complex numbers" << std::endl;
    std::cout << "(" << z1.getRe() << " + " << z1.getIm() << "i) + ";
    std::cout << "(" << z2.getRe() << " + " << z2.getIm() << "i) = ";
}

void Complex::coutSum(Complex z1, Complex z2) {
    std::cout << "(" << z1.getRe() << " + " << z2.getRe() << ") + ";
    std::cout << "(" << z1.getIm() << " + " << z2.getIm() << ")i = ";
}

Complex Complex::sum(Complex z1, Complex z2) {
    taskSum(z1, z2);
    coutSum(z1, z2);
    int re = z1.getRe() + z2.getRe();
    int im = z1.getIm() + z2.getIm();
    Complex *complex = new Complex(re, im);
    resultCoplex(*complex);

    return *complex;
}

void Complex::taskSub(Complex z1, Complex z2) {
    std::cout << "Subtraction of complex numbers: "<<std::endl;
    std::cout << "(" << z1.getRe() << " + " << z1.getIm() << "i) - ";
    std::cout << "(" << z2.getRe() << "+ " << z2.getIm() << "i) = ";
}

void Complex::coutSub(Complex z1, Complex z2) {
    std::cout << "(" << z1.getRe() << " - " << z2.getRe() << ") + ";
    std::cout << "(" << z1.getIm() << " - " << z2.getIm() << ")i = ";
}

Complex Complex::sub(Complex z1, Complex z2) {

    taskSub(z1, z2);
    coutSub(z1, z2);
    int re = z1.getRe() - z2.getRe();
    int im = z1.getIm() - z2.getIm();

    Complex *complex = new Complex(re, im);
    resultCoplex(*complex);

    return *complex;
}

void Complex::taskDiv(Complex z1, Complex z2) {
    std::cout << "Division of complex numbers: "<<std::endl;
    std::cout << "(" << z1.getRe() << " + " << z1.getIm() << "i) / ";
    std::cout << "(" << z2.getRe() << " + " << z2.getIm() << "i) = ";
}

Complex Complex::div(Complex z1, Complex z2) {
    taskDiv(z1, z2);
    int re = (z1.getRe() * z2.getRe() + z1.getIm() * z2.getIm()) /
             (z2.getRe() * z2.getRe() + z2.getIm() * z2.getIm());
    int im = (z1.getIm() * z2.getRe() - z1.getRe() * z2.getIm()) /
             (z2.getRe() * z2.getRe() + z2.getIm() * z2.getIm());

    Complex *complex = new Complex(re, im);
    resultCoplex(*complex);

    return *complex;
}









