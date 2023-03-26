#include <iostream>

int main(){
    // comma operator 

    int value_a=(2,4,6);
    int value_b=3;
    value_b=4,5,7;//(((b=4)5)6)---assignment operator has high precedence over the comma operator 
    std::cout<<value_a<<std::endl;
    std::cout<<value_b<<std::endl; 


    //Ternary Operator

    int a=3,b=5,max_value,true_value;
    max_value=a>b?a:b;
    std::cout<<"max_value is : "<< max_value<<std::endl;

    true_value=(a==4?(b==7?20:30):50);
    std::cout<<"true_value is : " << true_value<<std::endl;

    int test_1 = 1;//(in here 0 is the false value and (1 and other numbers are true))
    std::cout << (test_1 ? "A String" : 0) <<std::endl;

    int test = 1;
    float fvalue = 3.111f;
    std::cout << (test ? fvalue : 0) <<std::endl;
    
}