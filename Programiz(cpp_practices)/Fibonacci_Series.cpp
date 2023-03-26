#include<iostream>

int fibonacci_function(int fib_para){
    int f_value=0,s_value=1,temp;
    for(int i=0;i<fib_para;i++){
        std::cout<<f_value<<',';
        temp=f_value;
        f_value=s_value;
        s_value=s_value+temp;
    }
    return 0;
}


int main(){
    int fibonacci_limit;
    std::cout<<"enter the value: ";
    std::cin>>fibonacci_limit;
    fibonacci_function(fibonacci_limit);
}