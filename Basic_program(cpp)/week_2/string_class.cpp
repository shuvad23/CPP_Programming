#include<iostream>
#include<string>
#include<iterator>
#include<vector>
#include<array>

using namespace std;
main(){
/*
//Operations on strings
//Input Functions
//1. getline() :- This function is used to store a stream of characters as entered by the user in the object memory.
//2. push_back() :- This function is used to input a character at the end of the string.
//3. pop_back() :- Introduced from C++11(for strings), this function is used to delete the last character from the string.

    string user_name;
    getline(cin,user_name);
    cout<<"The user name: "<<user_name<<endl;
    user_name.push_back('s');
    cout<<"Update user name: "<<user_name<<endl;
    user_name.pop_back();
    cout<<"Last_update user name: "<<user_name<<endl;

//Capacity Functions
//4. capacity() :- This function returns the capacity allocated to the string, which can be equal to or more than the size of the string. Additional space is allocated so that when the new characters are added to the string, the operations can be done efficiently.
//5. resize() :- This function changes the size of string, the size can be increased or decreased.
//6.length():-This function finds the length of the string
//7.shrink_to_fit() :- This function decreases the capacity of the string and makes it equal to the minimum capacity of the string. This operation is useful to save additional memory if we are sure that no further addition of characters have to be made.

    cout<<user_name.length()<<endl;
    cout<<user_name.capacity()<<endl;
    user_name.resize(13);
    cout<<user_name<<endl;
    user_name.shrink_to_fit();
    cout<<user_name<<endl;
    cout<<user_name.capacity()<<endl;
    
//Iterator Functions
//8. begin() :- This function returns an iterator to beginning of the string.
//9. end() :- This function returns an iterator to end of the string.
//10. rbegin() :- This function returns a reverse iterator pointing at the end of string.
//11. rend() :- This function returns a reverse iterator pointing at beginning of string.

    


    string string_value="geeksforgeeks";
    string::iterator it;
    string::reverse_iterator it1;
    cout<<"the string iteration forwardly : ";
    for(it=string_value.begin();it!=string_value.end();it++){
        cout<<*it;
    }
    cout<<endl;
    cout<<"the string iteration backwardly : ";
    for(it1=string_value.rbegin();it1!=string_value.rend();it1++){
        cout<<*it1;
    }

*/


//Manipulating Functions
//12. copy(“char array”, len, pos) :- This function copies the substring in target character array mentioned in its arguments. It takes 3 arguments, target char array, length to be copied and starting position in string to start copying.
//13. swap() :- This function swaps one string with other.

/*
    string str1="geeksforgeeks is best";
    string str2="freecodecampe";
//copy(“char array”, len, pos)
    char ch[80];
// using copy() to copy elements into char array
// copies "geeksforgeeks"
    str1.copy(ch,13,0);
    cout<<"the charater copied value is : "<<ch<<endl;
    cout<<"swaping the value is : ";
    str1.swap(str2);
    cout<<"after swaping value str1 : "<<str1<<endl;
    cout<<"after swaping value str1 : "<<str2<<endl;
*/
//Raw string in c++--------------
//In C++, to escape characters like “\n” we use an extra “\”. From C++ 11, we can use raw strings in which escape characters (like \n \t or \” ) are not processed. The syntax of raw string is that the literal starts with R”( and ends in )”.
/*
    string str1="count\tvalue";
    string str2=R"(count\tvalue)";
    cout<<str1<<endl;
    cout<<str2<<endl;
*/
//Array of Strings in C++ (5 Different Ways to Create)
//1. Using Pointers: 
    const char *ch[4]={"python","java","C++","c"};
    for(int i=0;i<4;i++){
        cout<<ch[i]<<'\n';
    }
    
//2. Using 2D array
    char colour[3][40]={"freecodecamp","geeksforgeeks","javapoint"};
    for(int i=0;i<3;i++){
        cout<<colour[i]<<endl;
    }
//3. Using the string class:    
    string employee[3]={"employee1","employee2","employee3"};
    for(int i=0;i<3;i++){
        cout<<employee[i]<<"\n";
    }

//4. Using the vector class:
    vector<string> value{"23","234","53","32"};
    value.push_back("4499");
    for(int i=0;i<value.size();i++){
        cout<<value[i]<<endl;
    }
//5. Using the array class:
    array<string,2> program{"program1","program2"};
    for(int i=0;i<program.size();i++){
        cout<<program[i]<<"\n";
    }
}