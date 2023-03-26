#include<iostream>
using namespace std;

/*void function_1(){
    string name="101";//local variable;
    cout<<"THIS IS COMPUTER PROGRAMMING "<<name<<endl;
}
main(){
    function_1();
}
*/

// this example using opp
class Marks{
public:
    static int studentnumber;//static variable
    int Mathematics;//instance variable
    int Physics;
    int Chemistry;
public:
    Marks()
    {
        ++studentnumber;
    };
};
int Marks::studentnumber=0;
main(){
    Marks obj1;
    obj1.Mathematics=90;
    obj1.Physics=80;
    obj1.Chemistry=90;

    cout<<"Number "<< Marks::studentnumber<<endl;
    cout<<obj1.Mathematics<<endl;
    cout<<obj1.Physics<<endl;
    cout<<obj1.Chemistry<<endl;
}