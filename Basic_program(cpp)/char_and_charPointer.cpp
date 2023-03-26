#include <iostream>

int main(){
    // for(int i='a';i<=(int)'z';i++){
    //     std::cout<<(char)i<<' ';
    // }
    // std::cout<<std::endl;

    // for(int j='A';j<='Z';j++){
    //     std::cout<<(char)j<<' ';
    // }
    // std::cout<<'\n';
    
    // char name='A';
    // name='j';//update this value A to j;
    // std::cout<<name<<std::endl;
    
    // const char name1='a';
    // //name1='c'; this one is not update because name1 is a const variable 
    // std::cout<<name1<<std::endl;

    // char arr[]={'a','b','c','d'};
    // std::cout<<arr[2]<<'\n';
    // for(int i=0;i<sizeof(arr)/sizeof(char);i++){
    //     std::cout<<arr[i]<<' ';
    // }
    

    // std::cout<<'\n';

    // char x[5];
    // for(int i=0;i<5;i++){
    //     std::cout<<"enter the value : ";
    //     std::cin>>x[i];
    // }
    // for(int j=0;j<5;j++){
    //     std::cout<<x[j];
    // }



    std::cout<<std::endl;
    // //char pointer ------------------------------------
    // char a_='a';
    // char *ptr=&a_;
    // std::cout<<a_<<std::endl;
    // std::cout<<*ptr<<std::endl;
    // std::cout<<(int)&a_<<std::endl;
    // std::cout<<&ptr<<std::endl;
    // std::cout<<ptr<<std::endl;

    // char c[]="new string";///* Stored in stack segment */
    // c[4]='S';
    // std::cout<<c;
    // std::cout<<std::endl;
    // std::cout<<sizeof(c);
    // std::cout<<std::endl;



    // char *ch="new string";
    // std::cout<<ch;
    // ch++;//pointer are incremented
    // std::cout<<sizeof(ch);

//==================================================================================

  int size = 4;
  char *str = (char *)malloc(sizeof(char)*size); /*Stored in heap segment*/
  *(str+0) = 'G';
  *(str+1) = 'f'; 
  *(str+2) = 'G';
  *(str+3) = '\0'; 
  std::cout<<str;



}

//Escape Sequences	Characters
    //  \b	Backspace
    //  \f	Form feed
    //  \n	Newline
    //  \r	Return
    //  \t	Horizontal tab
    //  \v	Vertical tab
    //  \\	Backslash
    //  \'	Single quotation mark
    //  \"	Double quotation mark
    //  \?	Question mark
    //  \0	Null Character