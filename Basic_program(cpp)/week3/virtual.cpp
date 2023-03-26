#include<iostream>
using namespace std;

/*
class A{
    public:
    virtual void function(){// in here if we are not use virtual keyword then the last answer is base class
        cout<<"base class"<<endl;
    }
};
class B:public A{
    public:
    void function(){
        cout<<"derived class"<<endl;
    }
};
main(){
    B derived;
    // pointer of Base type that points to derived1
    A* base_class = &derived;
    base_class->function();
}
*/


//==================================================
//Function overriding is redefinition of base class function in its derived class with same signature i.e return type and parameters.
//But there may be situations when a programmer makes a mistake while overriding that function. So, to keep track of such an error, C++11 has come up with the keyword override. It will make the compiler to check the base class to see if there is a virtual function with this exact signature. And if there is not, the compiler will show an error

/*
class A{
    public:
    virtual void function(){// in here if we are not use virtual keyword then the last answer is base class
        cout<<"base class"<<endl;
    }
};
class B:public A{
    public:
    void function(int a) override{
        cout<<"derived class"<<endl;
    }
};
main(){
    B derived1;
    // pointer of Base type that points to derived1
    A* base_class = &derived1;
    base_class->function();
}
*/

//C++ virtual Function Demonstration

class Animal{
    string type;
    public:
     // constructor to initialize type
        Animal(): type("Animal"){};
    // declare virtual function
        virtual string function(){
            return type;
        }

};
class Dog:public Animal{
    string type;
    public:
        Dog():type("Dog"){};

        string function() override{
            return type;
        }
    
};
class Cat:public Animal{
    string type;
    public:
        Cat():type("Cat"){};

        string function() override{
            return type;
        }
};
void print(Animal* obj){
    cout<<obj->function()<<endl;//(pointer_name)->(variable_name)
}
//Difference between Dot(.) and Arrow(->) operator:
//The Dot(.) operator is used to normally access members of a structure or union.
//The Arrow(->) operator exists to access the members of the structure or the unions using pointers.

main(){
    //// dynamically create objects using Animal pointers
    Animal* animal1=new Animal();
    Animal* dog1=new Dog();
    Animal* cat1=new Cat();
    
    print(animal1);
    print(dog1);
    print(cat1);
}