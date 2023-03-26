//Now there are various ranges that differ from unsigned to signed 
//bits. Under the signed bit, the range of an int varies from -128 to +127 and under the unsigned bit, int varies from 0 to 255.
//Defining Constants:
//In C/C++ program we can define constants in two ways as shown below:
//1.Using #define preprocessor directive
//2.Using a const keyword

#include<iostream>
#define datatype "string"
using namespace std;
main(){
//Using #define preprocessor directive  
//identifierName: It is the name given to constant.
//value: This refers to any value assigned to identifierName.
    cout<<"Datatype : "<< datatype <<endl;
//using a const keyword
    const int val1=5;
    cout<<"The value is : "<<val1<<endl;
    const float val2=3.434;
    cout<<"The floating point value : "<<val2<<endl;
    const char val3='a';
    cout<<"The charater type value : "<<val3<<endl;
    const wchar_t val4=L'G';
    cout<<"The wide charater type value : "<<val4<<endl;
    const string val5= "c++ programming language";
    cout<<"The string value : "<<val5<<endl;
}