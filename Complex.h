//
// Created by druzh on 06.05.17.
//

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

    static Complex sum(Complex z1, Complex z2);

    static void coutSum(Complex z1, Complex z2);

    static void taskSum(Complex z1, Complex z2);

    static Complex mult(Complex z1, Complex z2);

    static void taskMult(Complex z1, Complex z2);

    static void coutMult(Complex z1, Complex z2);

    static void resultCoplex(Complex z);

    static void taskSub(Complex z1, Complex z2);

    static void coutSub(Complex z1, Complex z2);

    static Complex sub(Complex z1, Complex z2);

    static void taskDiv(Complex z1, Complex z2);

    void coutDiv(Complex z1, Complex z2);

    static Complex div(Complex z1, Complex z2);
};
