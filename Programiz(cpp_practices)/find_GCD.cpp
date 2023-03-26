#include<iostream>

//Find_GCD(two number).............................................
int find_gcd1(int a,int b){
    while(a!=b){
        if(a>b){
            a-=b;
        }else{
            b-=a;
        }
    }
    return a;
}



// Find_GCD(multiple number).......................................
int gcd(int a,int b){
    if(a==0){
        return b;
    }else{
        return gcd(b%a,a);
    }
}

int find_gcd(int arr[],int n){
    int result=arr[0];
    for(int i=1;i<n;i++){
        result=gcd(arr[i], result);
        if(result==1){
            return result;
        }
    }
    return result;
}

int main(){
    int arr[]={12,24,36,48,60,72 };
    int n=sizeof(arr)/sizeof(int);
    std::cout<<find_gcd(arr,n)<<std::endl;

    int n1=12;
    int n2=36;
    std::cout<<find_gcd1(n1,n2)<<std::endl;
}