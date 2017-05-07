#include <iostream>
#include "Complex.h"


class ComplexCout {

public:
    void taskMult(Complex z1, Complex z2) {
        std::cout << "Multiplication of complex numbers: " << std::endl;
        std::cout << "(" << z1.getRe() << " + " << z1.getIm() << "i) * ";
        std::cout << "(" << z2.getRe() << " + " << z2.getIm() << "i) = ";
    }

    static void coutMult(Complex z1, Complex z2) {
        std::cout << "(" << z1.getRe() << "*" << z2.getRe() << " - ";
        std::cout << z1.getIm() << "*" << z2.getIm() << ") + ";
        std::cout << "(" << z1.getIm() << "*" << z2.getRe() << " + ";
        std::cout << z1.getRe() << "*" << z2.getIm() << ")i = ";
    }

    static void resultCoplex(Complex z) {
        std::cout << z.getRe() << " + ";

        if (z.getIm() < 0) {
            std::cout << "(" << z.getIm() << ")i" << std::endl;
        } else
            std::cout << z.getIm() << "i" << std::endl;
        std::cout << std::endl;
    }

    static void taskSum(Complex z1, Complex z2) {
        std::cout << "Sum of complex numbers" << std::endl;
        std::cout << "(" << z1.getRe() << " + " << z1.getIm() << "i) + ";
        std::cout << "(" << z2.getRe() << " + " << z2.getIm() << "i) = ";
    }


    static void coutSum(Complex z1, Complex z2) {
        std::cout << "(" << z1.getRe() << " + " << z2.getRe() << ") + ";
        std::cout << "(" << z1.getIm() << " + " << z2.getIm() << ")i = ";
    }

    static void taskSub(Complex z1, Complex z2) {
        std::cout << "Subtraction of complex numbers: " << std::endl;
        std::cout << "(" << z1.getRe() << " + " << z1.getIm() << "i) - ";
        std::cout << "(" << z2.getRe() << "+ " << z2.getIm() << "i) = ";
    }

    static void coutSub(Complex z1, Complex z2) {
        std::cout << "(" << z1.getRe() << " - " << z2.getRe() << ") + ";
        std::cout << "(" << z1.getIm() << " - " << z2.getIm() << ")i = ";
    }

    static void taskDiv(Complex z1, Complex z2) {
        std::cout << "Division of complex numbers: " << std::endl;
        std::cout << "(" << z1.getRe() << " + " << z1.getIm() << "i) / ";
        std::cout << "(" << z2.getRe() << " + " << z2.getIm() << "i) = ";
    }

};
