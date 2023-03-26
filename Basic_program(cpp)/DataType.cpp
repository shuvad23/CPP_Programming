#include <iostream>
#include <limits.h>

int main(){
    std::cout<<"size of int"<<sizeof(int)<<std::endl;
    std::cout<<"size of int"<<sizeof(short int)<<std::endl;
    std::cout<<"size of int"<<sizeof(unsigned int)<<std::endl;
    std::cout<<"size of int"<<sizeof(signed int)<<std::endl;
    std::cout<<"size of int"<<sizeof(char)<<std::endl;
    std::cout<<"size of int"<<sizeof(long int)<<std::endl;
    std::cout<<"size of int"<<sizeof(signed long int)<<std::endl;
    std::cout<<"size of int"<<sizeof(unsigned long int)<<std::endl;
    std::cout<<"size of int"<<sizeof(double)<<std::endl;
    std::cout<<"size of int"<<sizeof(float)<<std::endl;
    std::cout<<"size of int"<<sizeof(wchar_t)<<std::endl;
    
    
    std::cout<<"size of int"<<sizeof(CHAR_MIN)<<std::endl;//for an object of type char
    std::cout<<"size of int"<<sizeof(CHAR_MAX)<<std::endl;//value for an object of type char
    std::cout<<"size of int"<<sizeof(SCHAR_MIN)<<std::endl;//for an object of type Signed char
    std::cout<<"size of int"<<sizeof(SCHAR_MAX)<<std::endl;//value for an object of type Signed char
    std::cout<<"size of int"<<sizeof(UCHAR_MAX)<<std::endl;//value for an object of type Unsigned char
    std::cout<<"size of int"<<sizeof(SHRT_MAX)<<std::endl;//value for an object of type short int
    std::cout<<"size of int"<<sizeof(SHRT_MIN)<<std::endl;//for an object of type short int
    std::cout<<"size of int"<<sizeof(CHAR_BIT)<<std::endl;//in a char object
    std::cout<<"size of int"<<sizeof(USHRT_MAX)<<std::endl;//value for an object of type Unsigned short int
    std::cout<<"size of int"<<sizeof(INT_MIN)<<std::endl;//for an object of type int MINVALUE
    std::cout<<"size of int"<<sizeof(INT_MAX)<<std::endl;//for an object of type int MAXVALUE
    std::cout<<"size of int"<<sizeof(LONG_MIN)<<std::endl;//for an object of type long int
    std::cout<<"size of int"<<sizeof(LONG_MAX)<<std::endl;//value for an object of type long int
    std::cout<<"size of int"<<sizeof(ULONG_MAX)<<std::endl;//value for an object of type Unsigned long int
    std::cout<<"size of int"<<sizeof(LLONG_MIN)<<std::endl;//value for an object of type long long int
    std::cout<<"size of int"<<sizeof(LLONG_MAX)<<std::endl;//value for an object of type long long int
    std::cout<<"size of int"<<sizeof(ULLONG_MAX)<<std::endl;//value for an object of type Unsigned long long int
}