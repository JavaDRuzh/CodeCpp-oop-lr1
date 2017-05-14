#pragma once
#ifndef UPDATE_H
#define UPDATE_H

class Complex {
private:

    double re;
    double im;

public:
    Complex(double re, double im);
    ~Complex() {};
    double getRe() const;
    double getIm() const;
    void setRe(double re);
    void setIm(double im);

    // Multiplication of complex numbers
    Complex operator*(Complex &);	// Перегрузка оператора умножения

    // Sum of complex numbers
    Complex operator+(Complex &);	// Перегрузка оператора сложения

    // Subtraction of complex numbers
    Complex operator-(Complex &);	// Перегрузка оператора вычитания

    // Division of complex numbers
    Complex operator/(Complex &);	// Перегрузка оператора деления

    // Module of complex number
    static double mod(Complex z);

    friend std::ostream &operator<<(std::ostream &, Complex &);

};

#endif