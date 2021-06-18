//----------------------------------------------------------------------
// Name: Noemi Turner
// File: calculator.h
// Date: Summer 2021
// Desc: Basic calculator project
//----------------------------------------------------------------------


#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator
{
public:
    // default destructor
    ~Calculator() {};
    int addition(int num1, int num2) const;
    int subtraction(int num1, int num2) const;
    int multiplication(int num1, int num2) const;
    int division(int num1, int num2) const;
    
    // TO DO: ADD  EQUALS SIGN OPERATOR
    // TO DO: ADD POSITIVE AND DEGITIVE OPERATOR
    // TO DO: MAKE FUNCTIONS WORK WITH DECIMAL NUMBERS
    // TO DO: HAVE CALCULATOR HANDLE EXCELPTIONS (SUCH AS CANNOT DIVIDE BY ZERO ERRO MESSAGE)
    // TO DO: MAKE A CLEAR BUTTON FEATURE POSSIBLY
    // TO DO: MAKE A MENU FOR THE CALCULATOR

private:


};

#endif