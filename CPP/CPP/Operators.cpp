//
//  Operators.cpp
//  CPP
//
//  Created by Jeremy Shefer on 4/24/17.
//  Copyright © 2017 Jeremy Shefer. All rights reserved.
//

#include <iostream>

using namespace std;

void run () {
    int a = 10;
    int b = 5;
    
    cout << a + b << endl;
    
    int d = 1;
    
    cout << ++d << endl; // PREincrementation
    
    cout << d++ << endl; // POSTincrementation
    cout << d << endl;
    
    
    //Relational Operators
    
    cout << (a == b) << endl;
    
    
    //bitwise operators
    
    /*
        1 0 1 0 = 1 * 2 ^ 3 + 0 * 2 ^ 2 + 1 * 2 ^ 1 + 0 * 2 ^ 0 = 8 + 0 + 2 + 0 = 10 in decimal notation 
     
        1 0 1 1 0 0 = 2 ^ 5 + 2 ^ 3 + 2 ^ 2 = 32 + 8 + 4 = 44 in decimal notation
     
     */
    
    /*
        Bitwise AND - &
        Bitwise OR - |
        Bitwise NOT - ~ (tilde)
        Bitwise XOR - ^ (caret) eXclusive OR
        Bitwise left shift <<
        Bitwise right shift >>
     */
    
    
    cout << (10 & 2) << endl;
    
    /*
        1 0 1 0
        0 0 1 0
        -------
        0 0 1 0
     */
    
    cout << (10 | 2) << endl;
    
    /*
        1 0 1 0 
        0 0 1 0
        -------
        1 0 1 0
     */
    
    cout << (10 ^ 2) << endl;
    
    /*
        1 0 1 0
        0 0 1 0
        -------
        1 0 0 0
     */
    
    cout << (~10) << endl;
    
    /*
        000000000000000000000000000000000 1 0 1 0
        111111111111111111111111111111111 0 1 0 1 - 1s make for anegative number
     */
    
    cout << (10 << 1) << endl; // we are multiplying 10 by 2 raised to the power of 1, pointing the other way will devide in the same manner
    
    /*
        000000000000000000000000000000000 1 0 1 0 - now last guy move to the left side
        000000000000000000000000000000001 0 1 0 0 - is now the result
     */
    
}
