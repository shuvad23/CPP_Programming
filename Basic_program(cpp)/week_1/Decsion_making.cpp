#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
main(){
    //if,else if,nested if,else,switch,break,continue,return,goto
    int a=23,b=34;
    switch(a){
        case 3:cout<<"continue_the_Process Number 1";
            break;
        case 4:cout<<"continue_the_Process Number 2";
            break;
        case 23:cout<<"continue_the_Process Number 3";
            break;
        default:cout<<"The value is incorrect";
            break;
    }
    cout<<endl;

    int k=2;
    for(k;k<=10;k++){
        if(k==5){
            continue;
        }else{
            cout<<k<<" ";
        }
    }

    cout<<endl;
    int j=8;
    labal:
        cout<<j<<" ";
        j++;
        if(j<=18) 
            goto labal;
}