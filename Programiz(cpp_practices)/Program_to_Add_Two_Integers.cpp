#include <iostream>
void addition_function(int& a,int& b){
    int result=a+b;
    std::cout<<"the result: "<<result<<std::endl;
}

int main(){
    int first_value,second_value;
    std::cout<< "Enter the value of first number : ";
    std::cin>>first_value;
    std::cout<< "Enter the value of first number : ";
    std::cin>>second_value;

    addition_function(first_value,second_value);
}