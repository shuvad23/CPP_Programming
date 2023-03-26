#include<iostream>

int factorial_function(int fac_value){
    if(fac_value==0){
        return 1;
    }else{
        return fac_value*factorial_function(fac_value-1);
    }
}

int main(){
    int factorial_number;
    std::cout<<"Enter the Factorial value : ";
    std::cin>>factorial_number;
    std::cout<<factorial_function(factorial_number);
}