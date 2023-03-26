#include<iostream>
// short int(4bytes)(-2^15 to (2^15-1))
//unsigned short int(4bytes) (2^16)
//unsigned int(4bytes) (2^32)
//int(4bytes) (-2^31 to (2^31-1))
//long int(4bytes) (-2^31 to (2^31-1))
//unsigned long int(8bytes) ((2^32))
//long long int(8bytes) ((-2^63 to (2^63-1)))
//unsigned long long int(8bytes)(2^64)
//signed char 1 bytes
//unsigned char 1 bytes 
//float 4 bytes
//double 8 bytes
//long double 8 bytes
//wchar_t (2 or 4) bytes
using namespace std;
main(){
    short int a;
    unsigned short int b;
    unsigned int c;
    int d;
    long int e;
    unsigned long int f;
    long long int g;
    unsigned long long int h;
    signed char i;
    unsigned char j;
    float k;
    double l;
    long double m;
    wchar_t n;

    cout<<sizeof(a)<<endl;
    cout<<sizeof(b)<<endl;
    cout<<sizeof(c)<<endl;
    cout<<sizeof(d)<<endl;
    cout<<sizeof(e)<<endl;
    cout<<sizeof(f)<<endl;
    cout<<sizeof(g)<<endl;
    cout<<sizeof(h)<<endl;
    cout<<sizeof(i)<<endl;
    cout<<sizeof(j)<<endl;
    cout<<sizeof(k)<<endl;
    cout<<sizeof(l)<<endl;
    cout<<sizeof(m)<<endl;
    cout<<sizeof(n)<<endl;
}