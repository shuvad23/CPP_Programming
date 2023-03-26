#include<iostream>

int casc_function(int &value){
    if(value%2==0){
        std::cout<<"Even";
    }
    else{
        std::cout<<"Odd";
    }
    return 0;
}

int main(){
    int EvenOddValue;
    std::cout<<"enter the value: ";
    std::cin>>EvenOddValue;
    casc_function(EvenOddValue);
}