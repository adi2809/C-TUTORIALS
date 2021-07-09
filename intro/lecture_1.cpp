#include <iostream>
using namespace std;

int main(){

    // average of two numbers a, b. a, b are variables as their values can change. c = (a+b)/2 ; the two in the denominator are 
    // constants. a variable's memory need is dependent on the data type. 
    // variables are of three different types - (primitive, derived, user-defined)
    // int : 32 bit range is from - 2^31 to 2^31 -1 (signed), 0 to 2^31 -1 (unsigned)

    // float, char etc.

    int a; // declaration 
    a = 12; // intialisation
    cout<<"size of int"<<sizeof(a)<<endl;


    float b;
    cout<<sizeof(b)<<endl;

    char c;
    cout<<sizeof(c)<<endl;

    bool bo;
    cout<<sizeof(bo)<<endl;

    return 0;

}