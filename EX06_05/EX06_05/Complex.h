//
//  Complex.h
//  EX06_05
//
//  Created by Lindsey Moon on 4/13/17.
//  Copyright © 2017 Lindsey Moon. All rights reserved.
//

#ifndef COMPLEX_H_
#define COMPLEX_H_

#include <iostream>
#include <string>
#include <cmath>
#include <sstream>

using namespace std;

class Complex
{
private:
    double real;
    double imaginary;
public:
    Complex(double A, double B);
    double getReal() const;
    double getImaginary() const;
    double ABS(Complex&);
    Complex add(const Complex& c);
    Complex subtract(const Complex& c);
    Complex multiply(const Complex& c);
    Complex divide(const Complex& c);
};

Complex operator+(const Complex& c1, const Complex& c2)
{
    Complex c = c1.add(c2);
    return c;
}

Complex operator-(const Complex& c1, const Complex& c2)
{
    Complex c = c1.subtract(c2);
    return c;
}

Complex operator * (const Complex& c1, const Complex& c2)
{
    Complex c = c1.multiply(c2);
    return c;
}

Complex operator / (const Complex& c1, const Complex& c2)
{
    Complex c = c1.divide(c2);
    return c;
}

#endif
