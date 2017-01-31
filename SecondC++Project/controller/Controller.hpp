//
//  Controller.hpp
//  SecondC++Project
//
//  Created by Williamson, Todd on 1/27/17.
//  Copyright © 2017 CTEC. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

class Controller
{
private:
    void tryNumbers(int sent);
    int changeNumber();
    void changeWithPointer(int * numberPointer);
    void inputNumber(int number);
public:
    void start();
};

#endif /* Controller_hpp */
