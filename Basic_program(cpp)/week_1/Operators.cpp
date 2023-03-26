#include<iostream>
using namespace std;
main(){

    int a=3;
    int b=5;
    int c=6;
//Arithmetic Operators:
    cout<<a+b<<endl;
    cout<<a-b<<endl;
    cout<<a*b<<endl;
    cout<<a/b<<endl;
    cout<<a%c<<endl;
    cout<<c++<<endl;
//Relational Operators:
    if(a==b){cout<< true;}
    else{cout<<false;}
    if(a<=b){cout<< true;}
    else{cout<< false;}
    if(a>=b){cout<< true;}
    else{cout<< false;}


//Logical Operator:
    if(a<b && b>a ){cout<< true;}
    else{cout<< false;}
    if(a<b || b>a ){cout<< true;}
    else{cout<< false;}
    if(a!=b){cout<< true<<endl;}
    else{cout<< false<<endl;}
//Bitwise Operator:
    cout<<(a&b)<<endl;
    cout<<(a|c)<<endl;
    cout<<(b^c)<<endl;
    cout<<(a>>2)<<endl;
    cout<<(b>>2)<<endl;
    cout<<(~b)<<endl;
//Assignment Operators: 
    int x=4;
    int y=2;
    cout<<(x +=2)<<endl;
    cout<<(x -=2)<<endl;
    cout<<(x +=2)<<endl;
    cout<<(x *=2)<<endl;
    cout<<(y /=3)<<endl;
    cout<<(y %=4)<<endl;
//comma operator:
    int z=3,p=4;
    int d=(z,p);
    cout<<d;
//sizeof operator :
    int t=23;
    cout<<sizeof(t)<<endl;
//condisional operator:
    int n=12;
    int m=11;
    (n>m)?cout<<"True":cout<<"False";

}