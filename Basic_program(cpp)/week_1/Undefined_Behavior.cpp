#include<iostream>
using namespace std;
main(){
//Undefined Behavior
    int i =12;
    int j=0;
    int k=i/j;
    cout<<k<<endl;
//    
    int *p=NULL;
    cout<<"%d"<<p<<endl;
//
    bool val;
    if(val){
        cout<<true;
    }else{
        cout<<false;
    }
//
    char *a="geeksfogeeks";
    a[0] = 'e';
    cout<<a;

//
    int b[5];
    cout<<b[2];

}