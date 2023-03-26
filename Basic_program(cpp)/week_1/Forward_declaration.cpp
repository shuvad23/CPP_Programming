#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class employee1;//Forward declaration ---
class employee2;//Forward declaration---

class employee1{
    public:
        string employee_name;
        string employee_email;
    public:
        void name(string name_value){
            employee_name=name_value;
        }friend string sum(employee1,employee2);
};

class employee2{
    public:
        string employee_name1;
        string employee_email1;
    public:
        void name1(string name_value){
            employee_name1=name_value;
        }friend string sum(employee1,employee2);
};

string sum(employee1 i,employee2 j){
    string value;
    value=i.employee_name+" "+j.employee_name1;
    return value;
}

main(){
    employee1 obj1;
    employee2 obj2;

    obj1.name("Nick");
    obj2.name1("Lark");
    cout<<"The string sum is : "<<sum(obj1,obj2);
}