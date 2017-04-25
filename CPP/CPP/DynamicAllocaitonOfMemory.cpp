//
//  DynamicAllocaitonOfMemory.cpp
//  CPP
//
//  Created by Jeremy Shefer on 4/25/17.
//  Copyright © 2017 Jeremy Shefer. All rights reserved.
//
#include <iostream>
#include "DynamicAllocaitonOfMemory.hpp"

void runDynamicAllocaiton() {
    {
        int *p = new int; // you only need to free the memory that is filled up dynamically, IE after the program execution has started.
        *p = 50;
        cout << *p << endl;
        
        delete p; // does not delete the pointer, releases the address;
        p = NULL; // we want to clear our the memory, so that the value becomes empty, instead of holding on to the value.
        
        cout << *p << endl; //
    }
    
//    cout << *p << endl;
}


