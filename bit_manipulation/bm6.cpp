// count the number of ones in binary representation of a number. 
#include <iostream>
using namespace std; 


int countOneInNum(int n){
    int count; 

    while(n!=0){

        n = (n & (n-1));
        count++;
    }

    return count;
}

int main(){

    int n; 
    cin>>n;

    int res = countOneInNum(n);
    cout<<res;
    
    return 0;
}