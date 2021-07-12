// check if a number is a power of two. 

#include <iostream>
using namespace std; 

bool checkPowerOfTwo(int n){

    bool status = false; 
    if ((n&(n-1))==0){
        status = true;
    }
    
    return status;
}

int main(){

    int n;
    cin>>n;

    cout<<checkPowerOfTwo(n);
    return 0;
}