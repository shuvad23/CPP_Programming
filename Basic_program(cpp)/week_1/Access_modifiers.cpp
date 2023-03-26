#include<iostream>
//Access Modifier 
/*1.public : (All the class members declared under the public specifier
 will be available to everyone. The data members 
and member functions declared as public can be accessed by other 
classes and functions too. The public members of a class can 
be accessed from anywhere in the program using the direct 
member access operator (.) with the object of that class. )
*/ 
/*2.private:(The class members declared as private can
be accessed only by the member functions inside the class.
They are not allowed to be accessed directly by any object or
function outside the class. Only the member functions or 
the friend functions are allowed to access the private data members
of a class.)
*/
/*3.protected
(Protected access modifier is similar to 
private access modifier in the sense that it can’t be accessed 
outside of it’s class unless with the help of friend class, the 
difference is that the class members declared as Protected can be 
accessed by any subclass(derived class) of that class as well. 

Note: This access through inheritance can alter the access 
modifier of the elements of base.
class in derived class depending on the modes of Inheritance.)
*/
using namespace std;
class parent{
    protected:
        int Id_Number ;
};
// sub class or derived class from public base class
class child:public parent{
    public:
        void Id_verification(int id){
            Id_Number=id;
        }
};
class employee{

    private:
        string Employee_password="PsHoN$^&#!@#09834";
    public:
        static int increase_employee;
        string First_Name;
        string Last_Name;
        string Email_Adress;
        string Phone_Number;
        string Date_Of_Birth;
        string Salary_per_annum;
        string Salary_per_Month;
        char Group_batch;
        int Serial_Number;
        double Average_Note;



    public:
        employee(){
            ++increase_employee;
        };
        double employee_catagory(double argument_value){
            if(Employee_password=="PsHoN$^&#!@#09834"){
            if (argument_value>8.00 and argument_value<=10.00){
                cout<<"Senior Developer";
            }else if(argument_value>5 and argument_value<=8){
                cout<<"Junior Developer";
            }else{
                cout<<"Fresher";
            }
        }else{
            cout<<"Sorry Employee "<<employee::increase_employee<<" Password is incorrect"<<endl;
        }
        return 0;
        }
};
int employee::increase_employee=0;
main(){
    employee employee1;
    employee1.First_Name="Nick";
    employee1.Last_Name="Lark";
    employee1.Email_Adress="nick23910@outlook.com";
    employee1.Phone_Number="+98745727647";
    employee1.Date_Of_Birth="10 October 2000";
    employee1.Salary_per_annum="$120k";
    employee1.Salary_per_Month="$12k";
    employee1.Group_batch='A';
    employee1.Serial_Number=78562;
    employee1.Average_Note=86.65;
    double catagory_value=((employee1.Average_Note/100)*10);
    string password;
    cin>>password;
    cout<<"Enter the Employee Password : "<<password<<endl;
    if(password=="PsHoN$^&#!@#09834"){
    cout<<"Employee Number : "<<employee::increase_employee<<endl;
    cout<<"Employee First Name : "<<employee1.First_Name<<endl;
    cout<<"Employee Last Name : "<<employee1.Last_Name<<endl;
    cout<<"Employee Email Adress : "<<employee1.Email_Adress<<endl;
    cout<<"Employee Phone Number : "<<employee1.Phone_Number<<endl;
    cout<<"Employee Date of Birth : "<<employee1.Date_Of_Birth<<endl;
    cout<<"Employee Salary per Annum : "<<employee1.Salary_per_annum<<endl;
    cout<<"Employee Salary per Month : "<<employee1.Salary_per_Month<<endl;
    cout<<"Employee Group Batch : "<<employee1.Group_batch<<endl;    
    cout<<"Employee Serial Number : "<<employee1.Serial_Number<<endl;
    cout<<"Employee Average Note : "<<employee1.Average_Note<<endl;
    cout<<"Employee Review : "<<employee1.employee_catagory(catagory_value)<<endl;
    }else{
        cout<<"Sorry this password is incorrect";
    }

    child id202;
    int value=23453;
    int value_verfication;
    id202.Id_verification(value);
}