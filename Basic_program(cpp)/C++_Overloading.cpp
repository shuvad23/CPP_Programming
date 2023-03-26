#include <iostream>



//==============================Causes of Function Overloading:(Type conversion)
// void fun(int);
// void fun(double);
// void fun(int i) { std::cout << "Value of i is : " << i << std::endl; }
// void fun(double j)// /all the floating point constants are treated as double not as a float.
// {
//     std::cout << "Value of j is : " << j << std::endl;
// }
// int main()
// {
//     fun(12);
//     fun(1.2);//all the floating point constants are treated as double not as a float. 
//             // If we replace float to double, the program works. 
//             //Therefore, this is a type conversion from float to double.
// }

//=========================Causes of Function Overloading:(Function with Default Arguments)==
// void fun(int);
// void fun(int, int);
// void fun(int i) { std::cout << "Value of i is : " << i << std::endl; }
// void fun(int a, int b = 9)
// {
//     std::cout << "Value of a is : " << a << std::endl;
//     std::cout << "Value of b is : " << b << std::endl;
// }
// int main()
// {
//     // fun(12);
//     fun(2,4);
//     return 0;
// }



// =====================================Causes of Function Overloading:(Function with Pass By Reference)

// void fun(int);
void fun(int&);
int main()
{
    int a = 10;
    fun(a); // error, which f()?
    return 0;
}
// void fun(int x) { std::cout << "Value of x is : " << x << std::endl; }
void fun(int& b)
{
    std::cout << "Value of b is : " << b << std::endl;
}
 

 //The above example shows an error “call of overloaded ‘fun(int&)’ is ambiguous“. 
//The first function takes one integer argument and the second function takes a reference parameter as an argument. 
//In this case, the compiler does not know which function is needed by the user as there is no syntactical difference between the fun(int) and fun(int &).