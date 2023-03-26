#include <iostream>

//====================================preprocessor execution==============================
// C++ program ---> 
//condition(Are preprocessor directives)-->
//if 'YES'--> preprocessor perform action-->
//compiler(object the code)-->
//Linker(executable code)-->

//=====================================MACROS(Preprocessor Directives)=========================
//Macros(The ‘#define’ directive is used to define a macro.)
//Note: There is no semi-colon (;) at the end of the macro definition. 
//Macro definitions do not need a semi-colon to end.
// #define LIMIT 5
// int main(){
//     int a=0;
//     for(;a<LIMIT;a++){
//         std::cout<<a<<std::endl;
//     }
// }


//=========================================MACROS with argument(Preprocessor Directives)====
//Macros With Arguments: We can also pass arguments to macros.
//Macros defined with arguments work similarly to functions.

// #define Array(first_perameterList , second_perameterList)(first_perameterList * second_perameterList)
// int main(){
//     int first_value=4,second_value=5;
//     std::cout<<"Total number is : "<<Array(first_value,second_value)<<std::endl;
// }


// ================================pragma Directive===============================
//This directive is a special purpose directive and is used to turn on or off some features
void func1();
void func2();


// #pragma startup func1(note::--> program will not work with GCC compilers. )
// #pragma exit func2
void __attribute__((constructor)) func1();// void __attribute__()  work with GCC compilers. 
void __attribute__((destructor)) func2();
  
void func1()
{
    std::cout << "Inside func1()"<<std::endl;
}
  
void func2()
{
    std::cout << "Inside func2()"<<std::endl;
}
  
int main()
{
    void func1();
    void func2();
    std::cout << "Inside main()"<<std::endl;
  
    return 0;
}

//