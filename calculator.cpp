//----------------------------------------------------------------------
// Name: Noemi Turner
// File: calculator.cpp
// Date: Summer 2021
// Desc: Basic calculator project
//----------------------------------------------------------------------

#include "calculator.h" 

int Calculator::add(int addend1, int addend2)
{
    int sum = addend1 + addend2;
    return sum;
}

int Calculator::subtract(int minuend, int subtrahend)
{
    int difference = minuend - subtrahend;
    return difference;
}

int Calculator::multiply(int factor1, int factor2)
{
    int product = factor1 * factor2;
    return product;
}

int Calculator::divide(int dividend, int divisor)
{
    int quotient = dividend / divisor;
    return quotient;
}

void Calculator::main_menu()
{
    std::cout << "****** Main Menu *******" <<endl;
    std::cout << "1. Add" <<endl;
    std::cout << "2. Subtract" <<endl;
    std::cout << "3. Multiply" <<endl;
    std::cout << "4. Divide" <<endl;
    std::cout << "5. Modulo" <<endl;
    std::cout << "6. Square" <<endl;
    std::cout << "7. Power" <<endl;
    std::cout << "8. Squart Root" <<endl;
    std::cout << "9. Factorial"  <<endl;
    std::cout << "10. Absolute Value" <<endl;

}

void Calculator::get_choice()
{

}
