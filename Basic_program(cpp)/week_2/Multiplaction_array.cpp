#include<iostream>
using namespace std;

void func(int arr[]){
    cout<<"function_return : "<<sizeof(arr);
}

void func1(int arr[]){
    cout<<"function_return : "<<sizeof(arr)*sizeof(int);
}

void func2(int (&arr)[10]){
    cout<<"function_return value: "<<sizeof(arr);
}

main(){
/*
    int MultArr[3][4]={{1,2,3,4},{5,6,7,8},{12,34,45,56}};
    for(int i=0;i<3;i++){
        cout<<"ROw"<<"["<<i<<"]"<<": ";
        for(int j=0;j<4;j++){
            cout<<MultArr[i][j]<<" ";
        }
        cout<<endl;
    }

    string string_MultArr[2][3]={{"java","Programming","Language"},{"C++","Programming","Language"}};
    cout<<"string value is : "<<string_MultArr[1][1]<<endl;



    double threeDi[2][3][2]={
        {
            {23,34},
            {56,53},
            {44,88}
        },
        {
            {22,75},
            {41,70},
            {73,90}
        }
    };
    for(int a=0;a<2;a++){
        for(int b=0;b<3;b++){
            for(int c=0;c<2;c++){
                cout<<"[Array][Row][Colum]: "<<"["<<a<<"]"<<"["<<b<<"]"<<"["<<c<<"] :="<<threeDi[a][b][c]<<endl;
            }
        }
        cout<<endl;
    }
    cout<<endl;

*/

//How to print size of array parameter in C++?

    int arr[10];
    cout<<sizeof(arr)<<endl;
    func(arr);
    cout<<endl;
    func1(arr);
    cout<<endl;
    func2(arr);
}