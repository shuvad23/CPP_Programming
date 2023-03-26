#include<iostream>


//using logical condition ----------------------------------------
int leapYearFunction(int Year){
    if(((Year%4==0)&&(Year%100!=0))||(Year%400==0)){
        std::cout<<Year<< " is a Leap Year";
    }
    else{
        std::cout<<Year<< " is not a Leap Year";
    }
    return 0;
}

// using if-else condition----------------------------------
int leapYearFunction2(int Year){
    if(Year%4==0){
        if(Year%100==0){
            if(Year%400==0){
                std::cout<<Year<<" is a leap year";
            }else{
                std::cout<<Year<<" is not a leap year";
            }
        }else{
            std::cout<<Year<<" is a leap year";
        }
    }else{
        std::cout<<Year<< " is not a leap year";
    }
    return 0;
}

int main(){
    int year;
    std::cout<<"Enter the Year : ";
    std::cin>>year;
    leapYearFunction(year);
    std::cout<<std::endl;
    leapYearFunction2(year);
}