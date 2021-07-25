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
    int add(int addend1, int addend2);
    int subtract(int minuend, int subtrahend);
    int multiply(int factor1, int factor2);
    int divide(int dividend, int divisor);
    void main_menu();
    void get_choice();

    // TO DO: ADD  EQUALS SIGN OPERATOR
    // TO DO: ADD POSITIVE AND DEGITIVE OPERATOR
    // TO DO: MAKE FUNCTIONS WORK WITH DECIMAL NUMBERS
    // TO DO: HAVE CALCULATOR HANDLE EXCELPTIONS (SUCH AS CANNOT DIVIDE BY ZERO ERRO MESSAGE)
    // TO DO: MAKE A CLEAR BUTTON FEATURE POSSIBLY
    // TO DO: MAKE A MENU FOR THE CALCULATOR

private:


};

#endif