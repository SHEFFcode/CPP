//
//  Pointers.cpp
//  CPP
//
//  Created by Jeremy Shefer on 4/25/17.
//  Copyright © 2017 Jeremy Shefer. All rights reserved.
//

#include "Pointers.hpp"

void runPointers() {
    int var = 5;
    
    int *p; // this means that p can store as a value the address of a variable (&var);  inform that this variable is a pointer
    //it can point to an addres of another variable. (note it is preceded by a type, if not preceded by a type u will get the value.
    
    p = &var; // pointers are ordinary variables that can store addresses of variables.
    //
    
    cout << p << endl; // will print out the memory address of the vairable
    cout << *p << endl; // will print out the value that is stored in the meory address. This is equivalent to saying *&var; *& cancel each other.
    
    
    
    
}
