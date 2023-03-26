#include <iostream>

int main(){
    //TypeCasting ( Implicit type casting and Explicit type casting )
    // implicit typecasting --> it is done by the compiler and there is no loss of infomation
    //Explicit typecasting --> it is done by the programmer and there will be lose of infomation

    int a=23,b=2;
    float division_result= a/b;
    std::cout<<"without typecasting : "<< division_result<<std::endl;

    float division_result1=(float) a/b;
    std::cout<<"typecasting : "<< division_result1<<std::endl;
    
    float division_result2=(float)(a/b);
    std::cout<<"typecasting : "<< division_result2<<std::endl;


    int x1=12;
    float y1;
    y1=(float)x1;
    std::cout<<"casting : "<<y1<<std::endl;


     // Given a1 & b1
    int a1 = 15, b1 = 2;
    char x = 'a';
  
    double div;
  
    // Explicit Typecasting in double
    div = (double)a1 / b1;

    // converting x implicitly to a+3 i.e, a+3 = d
    x = x + 3;

    std::cout<<"The result of Implicit typecasting is "<<x <<std::endl;
    std::cout<<"The result of Explicit typecasting is "<<div<<std::endl;
    
    
}