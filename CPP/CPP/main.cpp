//
//  main.cpp
//  CPP
//
//  Created by Jeremy Shefer on 4/24/17.
//  Copyright © 2017 Jeremy Shefer. All rights reserved.
//


#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    //Integer Variables
//    int A = 4;
//    
//    cout << A << endl;
//    cout << &A << endl;
    
    //Other variable types
    int a = 20, b, c = 40;
    
    cout << a << endl;
    cout << b << endl; //if you do not assign a default value, you might point to a space in memory where something else might already be.
    cout << c << endl;
    
    short t1 = 4;
    
    cout << t1;
    
    float t2 = 5.12; //4 bytes
    double t3 = 5.13; // 8 bytes
    
    char t4 = 'a';
    
    cout << t4 << endl;
    
    string t5 = "Hello world";
    
    cout << t5 << endl;
    
    const string NAMEOFGAME = "Conquer of C++";
    
    cout << NAMEOFGAME << endl;
    
    cout << a << endl;
    
    string name, surname;
    
    cout << "Pease Enter Your Name: " << endl;
    
    cin >> name;
    
    cout << "Please enter your surname " << endl;
    
    cin >> surname;
    
    cout << "Welcome " + name + " " + surname + "!" << endl;
    
    

}
