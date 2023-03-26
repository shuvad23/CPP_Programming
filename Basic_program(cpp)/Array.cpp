#include <iostream>

//Array(note)

// It is a group of variables of similar data types referred to by a single element.
// Its elements are stored in a contiguous memory location.
// The size of the array should be mentioned while declaring it.
// Array elements are always counted from zero (0) onward.
// Array elements can be accessed using the position of the element in the array.
// The array can have one or more dimensions.


int main(){
    int arr[5];
    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        std::cout<<"Arr["<<i+1<<"]"<<" = ";
        std::cin>>arr[i];
    }



    std::cout<<std::endl;
//===============================using for-each loop==================================
    for(int k :arr){
        std::cout<<k<<std::endl;
    }

    std::cout<<std::endl;
//=============================using sizeof =====================================
    for(int j=0;j<sizeof(arr)/sizeof(int);j++){
        std::cout<<"Arr["<<j+1<<"]"<<" = "<<arr[j]<<std::endl;
    }
    std::cout<<std::endl;
//============================using end() and begin()
    for(int z=0;z<std::end(arr)-std::begin(arr);z++){
        std::cout<<"Arr["<<z+1<<"]"<<" = "<<arr[z]<<std::endl;
    }

    std::cout<<std::endl;
//=================================================initilizer[array]=====================
    for(int z=0;z<std::end(arr)-std::begin(arr);z++){
        std::cout<<"Arr["<<z+1<<"]"<<" = "<<z[arr]<<std::endl;
    }

}