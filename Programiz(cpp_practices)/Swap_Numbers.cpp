#include <iostream>

void function(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main(){
    int value1,value2;
    std::cout<<"First_value is : ";
    std::cin>>value1;
    std::cout<<"second_value is : ";
    std::cin>>value2;
    function(value1,value2);
    std::cout<<"Swap first value: "<<value1<<std::endl;
    std::cout<<"Swap second value: "<<value2<<std::endl;
}