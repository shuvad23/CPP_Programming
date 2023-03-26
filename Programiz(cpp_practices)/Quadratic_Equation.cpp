#include<iostream>
#include<math.h>

int main(){
    //The term b2-4ac is known as the discriminant of a quadratic equation. The discriminant tells the nature of the roots.

//1.If discriminant is greater than 0, the roots are real and different.
//2.If discriminant is equal to 0, the roots are real and equal.
//3.If discriminant is less than 0, the roots are complex and different.

    int a ,b,c,x1,x2,discriminant,realpart,imaginarypart;
    std::cout<<"Enter the a,b,c value: ";
    std::cin>>a>>b>>c;
    discriminant=(b*b)-(4*a*c);

    ////1.If discriminant is greater than 0, the roots are real and different.
    if(discriminant>0){
        x1=(-b+(sqrt(discriminant)))/(2*a);
        x2=(-b-(sqrt(discriminant)))/(2*a);
        std::cout<<"the roots are real and different : "<<std::endl;
        std::cout<<" x1 : "<<x1<<std::endl;
        std::cout<<" x2 : "<<x2<<std::endl;
    }
    ////2.If discriminant is equal to 0, the roots are real and equal.
    else if(discriminant==0){
        x1=(-b)/(2*a);
        std::cout<<"the roots are real and equal : "<<std::endl;
        std::cout<<" x1==x2=="<<x1<<std::endl;
    }

    //3.If discriminant is less than 0, the roots are complex and different.
    else{
        realpart=(-b)/(2*a);
        imaginarypart=sqrt(-discriminant)/(2*a);
        std::cout<<"the roots are complex and different: "<<std::endl;
        std::cout<<"RealPart: "<<realpart<<std::endl;
        std::cout<<"ImaginaryPart: "<<imaginarypart<<std::endl;
    }


}