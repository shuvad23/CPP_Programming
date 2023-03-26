#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
void function101(int k){
    cout<<k*2<<" ";
}

struct class2{
    void operator()(int a){
        cout<<a*3<<" ";
    }
}obj;
main(){
//for loop statement---------
    for(/*initialization_expression*/int a=1;/*test_expression*/a<=10;/*update_expression*/a++){
        cout<<"for_loop: "<<a<<endl;        
    }
//while_loop-----
    int i=3;
    while(i<=12){
        cout<<"while_loop: "<<i<<endl;
        i++;
    }
//do_while_loop
    int j=12;
    do{
        cout<<"do_while_loop"<<j<<endl;
        j++;
    }while(j<=14);


//Range_base_for_loop---
    vector<int> value={1,2,3,4,5,6};
    for(int k:value){cout<<"Range_base_for_loop: "<<k<<endl;}

    vector<string> string_value={"python","java","C++","Swift","C#","Javascritp"};
    for(auto n:string_value){cout<<"string_value: "<<n<<endl;}

    map<int,string> MAP({{1,"Object"},{2,"Oriented"},{3,"Programming"}});
    for(auto n:MAP){cout<<"Map_value: "<<"{"<<n.first<<','<<n.second<<"}"<<endl;}

//for_each_loop--------------
    int a[8]={1,2,3,4,5,6,7,8};
    cout<<"MultiplyBy_2: ";
    for_each(a,a+8,function101);
    cout<<endl;
    cout<<"MultiplyBy_3: ";
    for_each(a,a+8,obj);
    cout<<endl;
    vector<int> object_value={3,4,5,6,7,8};
    cout<<"MultiplyBy_3_UsingVector : ";
    for_each(object_value.begin(),object_value.end(),obj);
}