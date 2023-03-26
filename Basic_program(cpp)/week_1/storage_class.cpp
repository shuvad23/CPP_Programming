#include<iosream>
using namespace std;
/*auto storage class---
void function_name(){
    auto a=12;
    auto b=23.33;
    auto c="programming language";
    auto d='C';

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
}
main(){
    function_name();
}
*/
/*extern
int x=2;
void function_name(){
    extern int x;    
    cout<<"The value: "<<x<<endl;
}
main(){
    function_name();
}
*/
/*static --
//https://youtu.be/u8jw0LsQFFg example in here -----
class static_class{
public:
    int x;
    static int y;//this is the declaration

    void printX(){cout<<x<<endl;}
    static void printY(){cout<<y<<endl;}
};
int static_class::y;// this is the defication
main(){
    static_class obj1;
    obj1.x=12;
    obj1.y=34;

    static_class obj2;
    obj2.x=23;
    obj2.y=56;

    cout<<obj1.x<<endl;
    cout<<obj1.y<<endl;
    cout<<obj2.x<<endl;
    cout<<obj2.y<<endl;

    obj1.printX();
    obj1.printY();
    obj2.printX();
    obj2.printY();

    cout<<static_class::y<<endl;   
}
*/
/*register ----
void registerclassfunction(){
    register int x=23;
    cout<<"register value is : "<<x<<endl;
}
main(){
    registerclassfunction();
}
*/
class task{
public:
    int x;
    mutable int y;

    task(){
        x=12;
        y=34;
    };
};
main(){
    const task obj;
    cout<<obj.x<<endl;
    cout<<obj.y<<endl;
    obj.y=55;
    cout<<obj.y<<endl;
}