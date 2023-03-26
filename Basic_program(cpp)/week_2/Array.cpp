#include<iostream>
using namespace std;
main(){
    int arr[3]={3,4,5};
    cout<<"The first value: "<<arr[1]<<endl;


    string string_value[4]={"Python","Java","C++","JavaScript"};
    
    for(int i=0;i<4;i++){
        cout<<"string_value"<<"["<<i+1<<"]"<<string_value[i]<<'\n';//way 1
        cout<<"string_value"<<"["<<i+1<<"]"<<i[string_value]<<'\n';//way 2
    }

    int integer_value[]={12,23,34,45,56,54,65};
    cout<<"Integer_value: "<<integer_value[3]<<endl;

}