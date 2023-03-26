#include<iostream>
// scope of variable -
// 1.local variable 2.Global variable
/*
int val3=22;//Global variable
using namespace std;
int function_name(){
    cout<<"Second Total value : "<<val3+23<<endl;
    return 0;
}
main(){
//local variable 
    int val1=23;
    int val2=34;
    cout<<"Total value :"<<val1+val2<<endl;
    function_name();   
}
*/
//How to access a global variable when there is a local variable with same name?
//Answer: to solve this problem we will need to use the (scope resolution operator)
// when you access the global variable  ...

//variable in same name
int global_variable=23;
using namespace std;
main(){
    int global_variable=34;
    cout<<"the value is : "<<global_variable<<endl;
    //Note : if you access the global variable ,you should use scope resolution operator (::)
    //Note : if you donot use (::),the compiler defultly access the local variable
    cout<<"the second value is : "<<:: global_variable <<endl;
}