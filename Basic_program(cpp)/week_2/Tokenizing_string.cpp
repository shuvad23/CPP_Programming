// #include <bits/stdc++.h>
// #include<iostream>
// using namespace std;

// int main()
// {
// //Using stringstream
// //A stringstream associates a string object with a stream allowing you to read from the string as if it were a stream.
// //Below is the C++ implementation : 
//     string line = "GeeksForGeeks is a must try";
      
//     // Vector of string to save tokens
//     vector <string> tokens;
      
//     // stringstream class check1
//     stringstream check1(line);
      
//     string intermediate;
      
//     // Tokenizing w.r.t. space ' '
//     while(getline(check1, intermediate, ' '))
//     {
//         tokens.push_back(intermediate);
//     }
      
//     // Printing the token vector
//     for(int i = 0; i < tokens.size(); i++)
//         cout << tokens[i] << '\n';
// }

//====================================================
/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
    //step1;
    string string_value="Geeksforgeeks    freecodecamp    javapoint";
    //step2;
    vector<string>tokens;
    //step3;
    stringstream stream_class(string_value);
    //step4;
    string intermediate;
    //step5;
    while(getline(stream_class,intermediate, ' ')){
        tokens.push_back(intermediate);
    }
    //step6;
    for(int i=0;i<tokens.size();i++)
        cout<<tokens[i]<<"\n";
}
*/

#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
main(){
    string value="geeksforgeeks freeecodecamp javapoint brocode";
    vector<string>tokens;
    stringstream check2(value);
    string intermediate;
    while(getline(check2,intermediate,' ')){
        tokens.push_back(intermediate);
    }
    for(int i=0;i<tokens.size();i++){
        cout<<tokens[i]<<'\n';
    }
}