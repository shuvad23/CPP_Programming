#include<iostream>
const char case_function(char &charater_ref){
    char charater_arr[]={'a','e','i','o','u','A','E','I','O','U'};
    for(int a=0;a<sizeof(charater_arr)/sizeof(char);a++){
        if(charater_arr[a]==charater_ref){
            std::cout<< charater_ref<<" is Vowel";
            return 0;
        }
    }
    std::cout<<charater_ref<<" is Consonant";
    return 0;
}

int main(){
    char charater;
    std::cout<<"enter the charater : ";
    std::cin>>charater;
    case_function(charater);
}