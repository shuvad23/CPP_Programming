//const function in c++-------------
#include<iostream>
using namespace std;
/*
class A{
    int a;
    public:
        A(int x=0){
            a=x;
        }
        int const_function()const{
            return a;
        }
};
main(){
    const A obj1(2);
    A obj(3);
    cout<<"value is : "<<obj1.const_function()<<endl;
    cout<<"value1 is : "<<obj.const_function();
}
*/


//========================================

class employee{
    string employee_name;
    public:
        employee(string value =""){
            employee_name=value;
        }
        string const_function()const;
};
//define the function out of the class;
string employee::const_function()const{
    return employee_name;
}
main(){
    const employee obj1("Nick");
    employee obj2("Lark");
    cout<<"employee_name: "<<obj1.const_function()<<endl;
    cout<<"employee_name1: "<<obj2.const_function()<<endl;
}