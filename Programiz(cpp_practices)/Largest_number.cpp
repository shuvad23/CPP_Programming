#include<iostream>

int Largest_value(int number_ref[],int b){
    int Largest=0;
    for(int i=0;i<b;i++){
            if(number_ref[Largest]<number_ref[i]){
                Largest=i;
            }
    }
    std::cout<<"largest value is : "<<number_ref[Largest];
    return 0;
}
int main(){
    int Number_arr[]={12,56,43,22,45,76,34,87,55,65};

    int a=sizeof(Number_arr)/sizeof(int);
    Largest_value(Number_arr,a);
}