//
//  ReferenceVariables.cpp
//  CPP
//
//  Created by Jeremy Shefer on 4/25/17.
//  Copyright © 2017 Jeremy Shefer. All rights reserved.
//

#include <iostream>
#include "ReferenceVariables.hpp"

using namespace std;

void runReference() {
    string name = "hello";
    
    cout << name << " " << &name << endl;
    
    string &nr_6 = name; // value under this address points to the name label which points to the value;  This creates a reference var.
    //Any use of &nr_6 from here on out is a memory address of that variable.
    
    nr_6 = "scott"; // Here we use without the & because we are accessing its name, not it's memory locaiton.
    
    cout << name << endl;
    
    /*
        References must be initialized when created.
        Reference vars cannot change associations.
        Rerefence vars must be of the same type as the assocated variables.
     */
    
    int a = 10;
    int b = 20;
    
    swap(a, b);
    
    cout << a << " " << b << endl;
    
    
}

void swap (int &x, int &y) {
    int t;
    t = x;
    x = y;
    y = t;
}
