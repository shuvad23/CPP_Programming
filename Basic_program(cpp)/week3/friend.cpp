#include<iostream>
using namespace std;

//note
/*
//class className1{
  // Other Declarations
  int functionName1(); // member function of className1
};

class className2
{
  // Other Declarations
  friend int className1::functionName1();	//The functionName1() is a friend of className2
};
*/

/*class class_A{
    private:
        string value1;
    public:
        class_A(){
            value1="";
        }
        void function1(string string_value){
            value1=string_value;
        }friend class class_B;
};

class class_B{
    private:
        string value2;
    public:
        class_B(){
            value2="";
        }
        void function2(class_A &a){
            value2=a.value1+" "+"programming";
            a.value1="c++";            
        }
        void function_result(class_A a){
            cout<<"The value of a : "<<a.value1<<endl;
            cout<<"The value of b : "<<value2<<endl;
        }
};

main(){
    class_A a;class_B b;
    a.function1("Nick");
    b.function2(a);
    b.function_result(a);
}
*/



//============================================
/*
class Number{
    int a,b;
    public:
        void set_value(){
            a=30;
            b=20;
        }friend int mean(Number c);
};

int mean(Number c){
    return c.a+c.b;
}

main(){
    Number obj;
    obj.set_value();
    cout<<"Total value: "<<mean(obj)<<endl;
}
*/




//==========================================

//friend Function in C++

/*
class employee1{
    static int employee_name;
    friend int function_value(employee1);
};
int employee1::employee_name(4);
int function_value(employee1 obj){
    obj.employee_name +=8;
    return obj.employee_name;
}
main(){
    employee1 object;
    cout<<"value is : "<<function_value(object)<<endl;
}
*/


//=================================================
/*
class employee1{
    static string employee_name;
    friend string function_value(employee1);
};
string employee1::employee_name("Nick");
string function_value(employee1 obj){
    obj.employee_name +=" Lark";
    return obj.employee_name;
}
main(){
    employee1 object;
    cout<<"value is : "<<function_value(object)<<endl;
}
*/

// Add Members of Two Different Classes
/*
class B;
class A{
    int value1;
    public:
        A(){
            value1=12;
        }
        friend int addvalue(A,B);
};
class B{
    int value2;
    public:
        B(){
            value2=12;
        }friend int addvalue(A,B);
};
int addvalue(A objcet1,B object2){
    cout<<"addvalue : ";
    return objcet1.value1+object2.value2;
}
main(){
    A a;B b;
    cout<<addvalue(a,b);
}
*/
//friend class in c++------
/*
class B;
class A{
    int a;
    public:
        A(){
            a=12;
        }
        friend class B;
};
class B{
    int b;
    public: 
        B(){
            b=24;
        }
        int addvalue(A obj){
            return obj.a+b;
        }
};
main(){
    A obj1; 
    B obj;
    cout<<"Total value: "<<obj.addvalue(obj1);
}

*/
class B;
class A{
    int a;
    public:
        A(){
            a=0;
        }
        void function1(int x){
            a=x;
        }
        void showfunction(B b1);
};
class B{
    int b;
    public:
        B(){
            b=0;
        }
        void function2(int y){
            b=y;
        }
        friend void A::showfunction(B b1);
};
void A::showfunction(B b1){
    cout<<"The value of a: "<<a<<endl;
    cout<<"The value of b: "<<b1.b<<endl;
}
main(){
    A a;B b;
    a.function1(12);
    b.function2(30);
    a.showfunction(b);
}