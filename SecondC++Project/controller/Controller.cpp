//
//  Controller.cpp
//  SecondC++Project
//
//  Created by Williamson, Todd on 1/27/17.
//  Copyright © 2017 CTEC. All rights reserved.
//

#include "Controller.hpp"
#include <iostream>

using namespace std;

void Controller :: start()
{
    cout << "Hello World" << endl;
    int myNumber = 56;
    int * numberPointer = &myNumber;
    cout << myNumber << endl;
    tryNumbers(myNumber);
    myNumber = changeNumber();
    cout << "changed? " << myNumber << endl;
    changeWithPointer(numberPointer);
    cout << "Changed? " << myNumber << endl;
    inputNumber(myNumber);
}

void Controller :: tryNumbers(int sent)
{
    cout << "sent " << sent << endl;
    sent = 8 + 42 + 78;
    cout << sent << " is the new value" << endl;
}

int Controller :: changeNumber()
{
    return 2;
}

void Controller :: changeWithPointer(int * numberPoint)
{
    *numberPoint += 9032;
}

void Controller :: inputNumber(int input)
{
    cout << "input a number" << endl;
    cin >> input;
    cout << input << endl;
}
