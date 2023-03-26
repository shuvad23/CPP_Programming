#include <iostream>

int main(){
    // valid range of built-in data types ===========================

    // //char 
    // char charater_data = 128;
    // std::cout<< charater_data;
    // // charater limits is positive side is (0 > 128)
    // for(char a=-1;a>=-127;a--){
    //     std::cout<<a<<std::endl;
    // }

    // // charater limits is positive side is (0 < 127)
    // for(char a=0; a<=126;a++){
    //     std::cout<<a<<std::endl;
    // }

    //short ===============
    // short short_value;
    // for(short_value=32767;short_value<32770;short_value++){
    //     std::cout<<short_value<<std::endl;
    // }

    unsigned short ushort_value;
    for(ushort_value=65532;ushort_value<65539;ushort_value++){
        std::cout<<ushort_value<<std::endl;
    }


}