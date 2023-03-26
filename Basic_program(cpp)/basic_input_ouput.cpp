#include <iostream>

int main(){

    std::cout<< "this is the Ostream( output stream)"<<std::endl;
    // (cout is the object of ostream class )or cout is the instance of the osream
    //Standard output stream (cout): Usually the standard output device is the display screen. 
    //The C++ cout statement is the instance of the ostream class.
    //It is used to produce output on the standard output device which is usually the display screen. 
    //The data needed to be displayed on the screen is inserted in the standard output stream (cout) using the insertion operator(<<).

    int input_value;
    std::cin>> input_value;
    //(cin is the object of istream class) or cin is the instance of the istream
    //standard input stream (cin): Usually the input device in a computer is the keyboard. 
    //C++ cin statement is the instance of the class istream and is used to read input from the standard input device which is usually a keyboard. 
    //The extraction operator(>>) is used along with the object cin for reading inputs.
    //The extraction operator extracts the data from the object cin which is entered using the keyboard.


    std::cerr<< "cerr is the error stream but it's un-buffered standard error stream"<<std::endl;
    //Un-buffered standard error stream (cerr): The C++ cerr is the standard error stream that is used to output the errors. 
    //This is also an instance of the iostream class. As cerr in C++ is un-buffered so it is used when one needs to display the error message immediately.
    //It does not have any buffer to store the error message and display it later.

    std::clog<<"cerr is also the error stream but it's buffered standard error stream"<<std::endl;
    //buffered standard error stream (clog): 
    //This is also an instance of ostream class and used to display errors but unlike cerr the error is first inserted into a buffer and is stored in the buffer until it is not fully filled. 
    //or the buffer is not explicitly flushed (using flush()). 
    //The error message will be displayed on the screen too.
}