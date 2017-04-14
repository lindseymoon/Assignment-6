//
//  Complex.cpp
//  EX06_05
//
//  Created by Lindsey Moon on 4/13/17.
//  Copyright © 2017 Lindsey Moon. All rights reserved.
//

#include "Complex.h"

Complex::Complex(double A, double B)
{
    double a = A;
    double b = B;
}

double Complex::getReal() const
{
    return real;
}

double Complex::getImaginary() const
{
    return imaginary;
}

double Complex::ABS(Complex &A)
{
    return sqrt((pow(A.getReal(), 2) + pow(A.getImaginary(), 2)));
}

Complex Complex::add(const Complex& c)
{
    double r = getReal() + c.getReal();
    double im = getImaginary() + c.getImaginary();
    Complex newC(double r, double im);
    return newC(r, im);
}

Complex Complex::subtract(const Complex& c)
{
    double r = getReal() - c.getReal();
    double im = getImaginary() - c.getImaginary();
    Complex newC(double r, double im);
    return newC(r, im);
}

Complex Complex::multiply(const Complex& c)
{
    double r = getReal() * c.getReal();
    double im = getImaginary() * c.getImaginary();
    Complex newC(double r, double im);
    return newC(r, im);
}

Complex Complex::divide(const Complex& c)
{
    double r = getReal() / c.getReal();
    double im = getImaginary() / c.getImaginary();
    Complex newC(double r, double im);
    return newC(r, im);
}

Complex& operator+=(const Complex& c)
{
    *this = add(c);
    return *this;
}

Complex& operator-=(const Complex& c)
{
    *this = subtract(c);
    return *this;
}

Complex& operator*=(const Complex& c)
{
    *this = multiply(c);
    return *this;
}

Complex& operator/=(const Complex& c)
{
    *this = divide(c);
    return *this;
}
