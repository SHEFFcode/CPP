//
//  Arrays.cpp
//  CPP
//
//  Created by Jeremy Shefer on 4/25/17.
//  Copyright © 2017 Jeremy Shefer. All rights reserved.
//
#include <iostream>
#include "Arrays.hpp"

using namespace std;

void runArrays() {
    int arr[3]; //Type name[size]
    
    arr[0] = 5;
    arr[1] = 10;
    arr[2] = 15;
    //arr[3] = 25; //This will not work, cause it is outside the bounds of the array.  Will throw SIGABRT
    
    cout << arr[2] << endl; //we can however pull out the arr[3] it will print out the number that is in that address space.
    
    cout << arr[0] << " address is " << &arr[0] << endl; // name of address points to the first element in the array (same name space)
    cout << arr[1] << " address is " << &arr[1] << endl;
    cout << arr[2] << " address is " << &arr[2] << endl; // note that the memory addresses increment by 4 bytes which is 4 * 8 = 32 bit
    
    /* Hexadecimal notation conversion
     
     1 2 a = 1 * 16 ^ 2 + 2 * 16 ^ 1 + a * 16 ^ 0 = 256 + 32 + 10 = 298
     
     */
    
    //Multidimentional arrays
    
    
}
