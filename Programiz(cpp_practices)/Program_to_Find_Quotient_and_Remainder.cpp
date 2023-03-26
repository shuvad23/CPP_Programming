#include <iostream>

int main(){
    int dividend,divisor,quotient,remainder;
    std::cout<< "Enter the value of first number : ";
    std::cin>>dividend;
    std::cout<< "Enter the value of first number : ";
    std::cin>>divisor;

    quotient=dividend / divisor;//quotient part 
    remainder=dividend % divisor;//remainder part

    std::cout<<"Quotient : "<<quotient<<std::endl;
    std::cout<<"Remainder : "<<remainder<<std::endl;
    
}