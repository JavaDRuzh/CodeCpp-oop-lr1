#pragma once
#ifndef UPDATE_H
#define UPDATE_H

class Complex {
private:
    int re;
    int im;

public:
    Complex(int re, int im);

    ~Complex() {};

    int getRe() const;

    int getIm() const;

    void setRe(int re);

    void setIm(int im);

    // Multiplication of complex numbers
    static Complex mult(Complex z1, Complex z2);

    // Sum of complex numbers
    static Complex sum(Complex z1, Complex z2);

    // Subtraction of complex numbers
    static Complex sub(Complex z1, Complex z2);

    // Division of complex numbers
    static Complex div(Complex z1, Complex z2);

    // Module of complex number
    static double mod(Complex z);


};

#endif