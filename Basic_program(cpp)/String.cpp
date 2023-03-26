#include <iostream>
// using namespace std;


int main(){
        // various constructor of string class
  
    // initialization by raw string
    std::string str1("first string");
  
    // initialization by another string
    std::string str2(str1);
  
    // initialization by character with number of occurrence
    std::string str3(5, '#');
  
    // initialization by part of another string
    std::string str4(str1, 6, 6); //    from 6th index (second parameter)
                             // 6 characters (third parameter)
  
    // initialization by part of another string : iterator version
    std::string str5(str2.begin(), str2.begin() + 5);
  
    std::cout << str1 << std::endl;
    std::cout << str2 << std::endl;
    std::cout << str3 << std::endl;
    std::cout << str4 << std::endl;
    std::cout << str5 << std::endl;


        //  assignment operator
    std::string str6 = str4;
  
    // clear function deletes all character from string
    str4.clear();
  
    //  both size() and length() return length of string and
    //  they work as synonyms
    int len = str6.length(); // Same as "len = str6.size();"
  
    std::cout << "Length of string is : " << len << std::endl;
  
    // a particular character can be accessed using at /
    // [] operator
    char ch = str6.at(2); //  Same as "ch = str6[2];"
  
  
    std::cout << "third character of string is : " << ch << std::endl;
  
    //  front return first character and back returns last character
    //  of string
  
    char ch_f = str6.front();  // Same as "ch_f = str6[0];"
    char ch_b = str6.back();   // Same as below
                               // "ch_b = str6[str6.length() - 1];"
  
    std::cout << "First char is : " << ch_f << ", Last char is : "
         << ch_b << std::endl;
  
    // c_str returns null terminated char array version of string
    const char* charstr = str6.c_str();
    std::cout<<"charstr"<< charstr<<std::endl;
  
    // append add the argument string at the end
    str6.append(" extension");
    //  same as str6 += " extension"
  
    // another version of append, which appends part of other
    // string
    str4.append(str6, 0, 6);  // at 0th position 6 character
  
    std::cout << str6 << std::endl;
    std::cout << str4 << std::endl;
  
    //  find returns index where pattern is found.
    //  If pattern is not there it returns predefined
    //  constant npos whose value is -1
  
    if (str6.find(str4) != std::string::npos)
        std::cout << "str4 found in str6 at " << str6.find(str4)
             << " pos" << std::endl;
    else
        std::cout << "str4 not found in str6" << std::endl;
  
    //  substr(a, b) function returns a substring of b length
    //  starting from index a
    std::cout << str6.substr(7, 3) << std::endl;
  
    //  if second argument is not passed, string till end is
    // taken as substring
    std::cout <<"substring : " <<str6.substr(7) << std::endl;
  
    //  erase(a, b) deletes b characters at index a
    str6.erase(7, 4);
   std::cout <<"deletes b characters at index a"<<str6 << std::endl;
  
    //  iterator version of erase
    str6.erase(str6.begin() + 5, str6.end() - 3);
    std::cout <<" iterator version of erase"<< str6 << std::endl;
  
    str6 = "This is a examples";
  
    //  replace(a, b, str)  replaces b characters from a index by str
    str6.replace(2, 7, "ese are test");
  
    std::cout << str6 << std::endl;
}