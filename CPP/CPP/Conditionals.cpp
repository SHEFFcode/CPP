//
//  Conditionals.cpp
//  CPP
//
//  Created by Jeremy Shefer on 4/24/17.
//  Copyright © 2017 Jeremy Shefer. All rights reserved.
//
#include <iostream>
#include "Conditionals.hpp"

using namespace std;


void runConditionals() {
    
    int a, b;
    
    a = 5;
    b = 4;
    
    if (a > b) {
        cout << a << " > " << b << endl;
    }
    
    //switch statement
    
    int x = 50;
    
    switch (x) {
        case 50:
            cout << "Hey it's 50!";
            break;
        case 40:
            cout << "Hey it's not 50";
            break;
            
        default:
            cout << "Hey it's not 50!";
            break;
    }
    
    int c = 30;
    int d = 20;
    
    
    //Ternary statement
    string message = (a > b) ? "a > b" : "a <= b";
        
    
    
}
