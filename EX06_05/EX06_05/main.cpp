//
//  main.cpp
//  EX06_05
//
//  Created by Lindsey Moon on 4/13/17.
//  Copyright © 2017 Lindsey Moon. All rights reserved.
//

#include <iostream>
#include <string>
#include <cmath>
#include "Complex.h"

using namespace std;

int main()
{
    double r1, i1, r2, i2;
    cout << "Enter the first complex number: ";
    cin >> r1 >> i1;
    cout << "\nEnter the second complex number: ";
    cin >> r2 >> i2;
    
    Complex n1(r1, i1);
    Complex n2(r2, i2);
    Complex n3 = n1.add(n2);
}
