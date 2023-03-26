#include<iostream>
#include<string>
#include<iterator>
#include<vector>
using namespace std;
main(){
//Operations of iterators :-
//1. begin() :- This function is used to return the beginning position of the container.
//2. end() :- This function is used to return the after end position of the container.

    vector<int> value={1,2,3,4,5};
    vector<int>::iterator ptr;
    cout<<"All value are: ";
    for(ptr=value.begin();ptr<value.end();ptr++){
        cout<<*ptr<<" ";
    }

//3. advance() :- This function is used to increment the iterator position till the specified number mentioned in its arguments.

    cout<<endl;
    vector<int>::iterator val=value.begin();
    cout<<"after all the value: ";
    advance(val,4);
    cout<<*val<<endl;

//4. next() :- This function returns the new iterator that the iterator would point after advancing the positions mentioned in its arguments.
//5. prev() :- This function returns the new iterator that the iterator would point after decrementing the positions mentioned in its arguments.

    vector<int>::iterator next_value=value.begin();
    vector<int>::iterator end_value=value.end();
    cout<<"This function return the new iterator (next()): ";
    auto val1=next(next_value,4);
    cout<<*val1<<endl;
    cout<<"This function return the new iterator (next()): ";
    auto val2=prev(end_value,3);
    cout<<*val2<<endl;
//6. inserter() :- This function is used to insert the elements at any position in the container. It accepts 2 arguments, the container and iterator to position where the elements have to be inserted.

    vector<string> str_first={"java","python","c++"};
    vector<string> str_second={"javascript","swift","C#"};

    vector<string>::iterator ptr=str_first.begin();
    advance(str_first,2);
    copy(str_second.begin(),str_second.end(),inserter(str_first,*ptr));
    cout<<str_first<<endl;
}